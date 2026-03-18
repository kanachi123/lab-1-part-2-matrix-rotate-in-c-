//343.
#include <stdio.h>
int ret_index(int n,int array[n]);
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
    int index = ret_index(n,array);
    printf("index = %d\n",index);
    printf("array[%d] = %d\n",index,array[index]);

    return 0;
}
int ret_index(int n,int array[n]){
    
    int max_sum = 0;
    int index = 0;
    
    for(int i = 1;i < n-1;i++){
        
        if(max_sum < array[i-1]+array[i+1])
        {
            max_sum = array[i-1]+array[i+1];
            index = i;
        }
    }
    
    return index;
}
