//  341.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_sum(int a[],int N,int K);


int main(){
    
    int n,k,sum;
    
    printf("nermuceq zangvaci chapy:\n");
    scanf("%d",&n);
    
    printf("k tivy:\n");
    scanf("%d",&k);
    
    int X[n];
    
    //srand(time(NULL));
    for(int i = 0;i < n;i++)
    {
        // A-ic B tiruyti tiv -> rand() % (B - A + 1) + A
        X[i] =  rand() % (88 - 40 + 1) + 40;
    }
    for(int i = 0;i < n;i++)
    {
        printf("%d ",X[i]);
    }
    printf("\n");
    
    sum = get_sum(X,n,k);
    
    printf("%d",sum);

    return 0;
}

int get_sum(int a[],int N,int K){
    
    int sum = 0;
    for(int i = 1;i < N-1;i++)
    {
        if((a[i-1] + a[i+1]) < K){
            
            sum += a[i];
            
        }
        
    }
    
    return sum;
    
}
