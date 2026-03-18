//497.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void size_n(float *a);
void fill_matrix(int n,int matrix[][n]);
void edit_matrix(int n,int matrix[][n]);
void print_matrix(int n,int matrix[][n]);
int main()
{
    float a;
    size_n(&a);
    int n = (int)a;
    int matrix[n][n];

    system("cls");
    system("color 2");
    printf("\nmatrix before\n");
    fill_matrix(n,matrix);

    edit_matrix(n,matrix);

    printf("\nmatrix after\n");
    print_matrix(n,matrix);


    return 0;
}

void size_n(float *a)
{
    printf("nermuceq n bnakan tivy\n");
    scanf("%f",a);
    while(*a <=0 || *a - (int)(*a) != 0)
    {
        printf("nermucvac tivy bnakan che\nporceq noric\n");
        scanf("%f",a);
    }
}

void fill_matrix(int n,int matrix[][n])
{
    srand(time(NULL));

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            matrix[i][j] = rand() % 9;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
void edit_matrix(int n,int matrix[][n])
{
    for(int i = 0;i < n;i++)
    {
        int max = matrix[i][0];
        for(int j = 0;j < n;j++)
        {

            if(max < matrix[i][j])
                max = matrix[i][j];
        }
        matrix[i][i] = max;
    }
}
void print_matrix(int n,int matrix[][n])
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
