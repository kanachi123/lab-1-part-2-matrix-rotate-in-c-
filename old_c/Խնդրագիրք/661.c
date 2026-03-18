//661.

#include <stdio.h>
#include <string.h>

int main()
{
    char tox_1[] = "wdown";
    char tox_2[] = "are";
    
    int n = strlen(tox_1) + strlen(tox_2) + 1;
    char tox_3[n];
    
    int tox_1_length = strlen(tox_1);
    int midpoint = tox_1_length / 2;
    
    strncpy(tox_3, tox_1, midpoint); 
    strncpy(tox_3 + midpoint, tox_2, strlen(tox_2)); 
    strncpy(tox_3 + midpoint + strlen(tox_2), tox_1 + midpoint, tox_1_length - midpoint); 
    
    tox_3[n - 1] = '\0'; 
    
    printf("%s", tox_3);
    
    return 0;
}
