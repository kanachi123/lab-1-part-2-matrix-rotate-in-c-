//347.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void scan_n(float *n);
int find_max(int max,int a,int array[a]);

int main()
{
    int max;
    float n;
    scan_n(&n);
    
    int a = (int)n;
    int array[a];
    
    srand(time(NULL));
    for(int i = 0;i < a;i++)
    {
        array[i] = rand()%101-50;
        printf("%d ",array[i]);
    }
    
    printf("\n\n");
    printf("max = %d",find_max(max,a,array));
    
    return 0;
}
void scan_n(float *n)
{
    printf("nermuceq zangvaci n chapy\n\n");
    scanf("%f",n);
    while(*n <= 0 || (*n-(int)*n) !=0)
    {
        printf("tivy petq e bnakan lini\nporceq noric\n\n");
        scanf("%f",n);
    }
    printf("\n");
}
int find_max(int max,int a,int array[a])
{
    max = array[0];
    for(int i = 0;i < a;i+=3)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}
