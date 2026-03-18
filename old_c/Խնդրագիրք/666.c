//66.6
#include <stdio.h>
#include <string.h>

int main()
{
    char tox[] = "asfafhfdgjhkdhkhshga";
    int count = 0;
    
    for(int i = 1;i < strlen(tox) - 1;i++)
    {
        if(tox[i] > tox[i+1] && tox[i] > tox[i-1])
            count++;
    }
    printf("%d",count);
    return 0;
}
