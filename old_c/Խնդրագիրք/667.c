//667.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max_symblos 40

int main()
{
    char matrix[6][max_symblos] = 
    {
        "Avgust Hulisu 096123245",
        "Gen She 57798835",
        "Til Katil 295454",
        "Rick Sanchez 091010048",
        "Peter Parking 055141414",
        "Garshanq 0117777777"
    };
    char arr[] = "295454";
    
    for(int i = 0;i < 6;i++)
    {
        int j = 0;
        while((isdigit(matrix[i][j]) == 0) && (matrix[i][j] != '\0'))
        {
            j++;
        }
        if(strstr(matrix[i],arr) != NULL)
        {
            for(int k = 0;k < j;k++)
            {
                putchar(matrix[i][k]);
            }
            putchar('\n');
        }
    }
    
    return 0;
}

