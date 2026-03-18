//345.
#include <stdio.h>
#include <stdbool.h>

int suuum(int n,int array[n]);
bool cooomposit(int n,int array[n]);

int main()
{
    float n;
    printf("nermuceq zangvaci chapy\n");
    scanf("%f",&n);
    while(n <= 0 ||(n-(int)n) !=0){
        
        printf("zangvaci chapy petq e bnakan lini\nnoric porceq\n");
        scanf("%f",&n);
    }
    
    int array[(int)n];
    printf("nermuceq zangvaci tarery\n");
    
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    if(cooomposit(n,array) == true)
    {
        printf("sum = %d",suuum(n,array));
    }
    
    else
    {
        printf("s = 1");
    }
    return 0;
}

int suuum(int n,int array[n])
{
    int sum = 0;
    for(int i = 1;i < n;i++){
        
        if(2*i-1 >= n)
        {
            break;
        }
        sum += array[2*i-1];
        
    }
    
    return sum;
}

bool cooomposit(int n,int array[n])
{
    int compost = 1;
    
    for(int i = 0;i < n;i++){
        
        if(2*i >= n)
        {
            break;
        }
        compost *= array[2*i];
    }
    
    if(compost > 0)
    {
        return true;
    }
    return false;
    
}
