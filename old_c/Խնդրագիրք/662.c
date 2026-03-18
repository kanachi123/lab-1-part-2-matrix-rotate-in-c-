//662.

#include <stdio.h>
#include <string.h>

int main()
{
    char tox_1[] = "<ord3";
    int n = strlen(tox_1) + 1 - 3;
    char tox_2[n];
    int midpoint_left = strlen(tox_1)/2 - 1;
    int midpoint_right = strlen(tox_1)/2 + 1;
    
    strncpy(tox_2,tox_1,midpoint_left);
    strncpy(tox_2 + midpoint_left,tox_1 + midpoint_right+1,midpoint_right);
    tox_2[n-1] = '\0';
    printf("%s",tox_2);
    

    return 0;
}
