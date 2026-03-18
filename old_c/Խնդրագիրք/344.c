//344.
#include <stdio.h>
#include <stdbool.h>

bool find_negative(int n,int array[n]);
int why_max(int n,int array[n]);

int main()
{
    float n;

    printf("nermuceq zangvaci chapy\n");
    scanf("%f",&n);
    
    while(n <= 0 || ((n-((int)n)) != 0))
    {
        printf("zangvaci chapy petq e bnakan lini\nnoric porceq\n");
        scanf("%f",&n);
    }
    
    int array[(int)n];
    
    printf("nermuceq zangvaci tarrery\n");
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    if(find_negative(n,array))
    {
        printf("max = %d\n",why_max(n,array));
    }
    else
    {
        printf("s = 0");
    }

    return 0;
}
bool find_negative(int n,int array[n]){
    
    for(int i = 0;i < n;i++)
    {
        if(array[i] < 0)
        {
            return true;
        }
    }
    
    return false;
}
int why_max(int n,int array[n]){
    
    int max = array[0];
    for(int i = 0;i < n;i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    
    return max;
}
