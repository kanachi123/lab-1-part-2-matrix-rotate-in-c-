#include <stdio.h>
#include <stdbool.h>
#define n 3
#define m 3

void fill_array(int imax,int jmax,bool mat[imax][jmax]);
bool retbool(int imax,int j,int jmax,bool mat[imax][jmax]);

int main()
{
    
    bool matrix[n][m];
    bool array[m];
    int j = 0;
    
    fill_array(n,m,matrix);
    
    while(j < m)
    {
        array[j] = retbool(n,j,m,matrix);
        printf("array[%d] = %d \n",j,array[j]);
        j++;
        
    }
    
    return 0;
}
void fill_array(int imax,int jmax,bool mat[imax][jmax]){
    
    printf("ներմուծեք մատրիցի տարրերը\n");
    for(int i = 0;i < imax;i++){
        
        int temp;
        for(int j = 0;j < jmax;j++){
            
            // temp քանի որ տրամաբանական տիպի համար սպեցիֆիկատոր գոյ․ չունի
            scanf("%d",&temp);
            mat[i][j] = temp;
        }
    }
}

bool retbool(int imax,int j,int jmax,bool mat[imax][jmax]){
    
    for(int i = 0;i < imax-1;i++)
    {
        if(mat[i][j] > mat[i+1][j])
        {
            return false;
        }
    }

    return true;
}
