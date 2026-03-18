//663.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 41

int main()
{
    char tox[n];
    int sum = 0,compos = 1;
    srand(time(NULL));
    
    for(int i = 0;i < n-1;i++)
    {
        tox[i] = 'a'+rand()%26;
    }
    tox[n-1] = '\0';
    
    printf("%s\n",tox);
    for(int i = 0;i < n;i++)
    {
        if(tox[i] == 'z')
        {
            sum += i;
            compos *= i;
        }
    }
    printf("sum(i) = %d\ncompos(i) = %d",sum,compos);
    return 0;
}
