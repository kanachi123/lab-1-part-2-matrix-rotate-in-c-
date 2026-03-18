//664.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 30

void edit_str(int m,char array[]);
int main()
{
    char tox[n];
    srand(time(NULL));
    for(int i = 0;i < n-1;i++)
    {
        tox[i] = 'A' + rand()%26-10;
        printf("%c ",tox[i]);
    }
    printf("\n");
    
    tox[n-1] = '\0';
    
    edit_str(n,tox);
    
    return 0;
}
void edit_str(int m,char array[])
{
    char temp_array[n];
    int j = 0;
    for(int i = 0;i < n;i++)
    {
        if((i % 3) != 0)
        {
            temp_array[j] = array[i];
            j++;
        }
    }
    temp_array[j] = '\0';
    
    for(int i = 0;i < j+1;i++)
    {
        array[i] = temp_array[i];
        printf("%c ",array[i]);
    }
    printf("\n");
}

/*
int main()
{
    int tox[n];
    srand(time(NULL));
    for(int i = 0;i < n-1;i++)
    {
        tox[i] = 'A' + rand()%26-10;
        printf("%c ",tox[i]);
    }
    printf("\n");
    
    tox[n-1] = '\0';
    
    for(int i = 0;i < n;i++)
    {
        if((i % 3) == 0)
        {
            tox[i] = ' ';
        }
        printf("%c ",tox[i]);
    }
    return 0;
}*/