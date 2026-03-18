//342.
#include <stdio.h>

int find_max(int n,int arr[n]);
int sum(int n,int arr[n]);
int compos(int n,int arr[n]);

int main(){
    
    int n;
    char a;
    
    printf("nermuceq miachap zangvaci chapy: ");
    scanf("%d",&n);
    
    int array[n];
    
    printf("zangvaci tarrery:");
    for(int i = 0;i < n;i++){
        
        scanf("%d",&array[i]);
        
    }
    if(find_max(n,array) <= n/2)
    {
        printf("drakan andamneri gumary = %d",sum(n,array));
    }
    else
        printf("bacasakan andamneri artadryaly = %d",compos(n,array));
    
    return 0;
}
int find_max(int n,int arr[n]){
    
    int max = arr[0];
    int jj = 0;
    for(int i = 0;i < n-1;i++){
        
        if(max < arr[i+1])
        {
            max = arr[i+1];
            jj = i+1;
        }
    }
    
    return jj;
}
int sum(int n,int arr[n]){
    
    int suum = 0;
    int i = 0;
    while(i < n){
        
        if(arr[i] > 0)
        {
            suum += arr[i];
        }
        i++;
    }
    return suum;
}
int compos(int n,int arr[n]){
    
    int cooompos = 1;
    int i = 0;
    while(i < n)
    {
        
        if(arr[i] < 0)
        {
            cooompos *= arr[i];
        }
        i++;
    }
    
    return cooompos;
}