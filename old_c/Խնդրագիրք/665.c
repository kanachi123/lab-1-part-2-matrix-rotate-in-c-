//665.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define n 5

bool is_palindrom(int m,char array[]);
void fill_array(int m,char array[]);

int main()
{
    int sum = 0;
    char tox[n];
    
    fill_array(n,tox);
    
    //միացնել այն դեպքում,եթե ուզում ես պալինդրոմի դեպքը աշխատի
    //(ցիկլի շուտ ավարտվելու հավանականությունը այնքան մեծ է որքան փոքր է n-ը)
    
    /* 
        while(is_palindrom(n,tox) != true)
        {
            fill_array(n,tox);
        }
    */
    
    if(is_palindrom(n,tox))
    {
        for(int i = 0;i < n-1;i++)
        {
            if(tox[i] == 'a')
                sum++;
        }
        printf("sum(a) = %d\n",sum);
    }
    else
    {
        for(int i = 0;i < n-1;i++)
        {
            if(tox[i] == 'b')
                sum++;
        }
        printf("sum(b) = %d\n",sum);
    }
    

    return 0;
}

bool is_palindrom(int m,char array[])
{
    int j = n - 2;
    bool t = false;
    for(int i = 0;i < n - 1;i++)
    {
        if(array[i] == array[j])
        {
            t = true;
            j--;
        }
        else
        {
            t = false;
            return t;
        }
    }
    return t;
}
void fill_array(int m,char array[])
{
    srand(time(NULL));
    
    for(int i = 0;i < m - 1;i++)
    {
        array[i] = 'a' + rand()%5;
        printf("%c ",array[i]);
    }
    printf("\n");
}