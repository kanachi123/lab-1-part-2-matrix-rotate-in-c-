//strcat

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strcat(char *m,const char *n);

int main()
{
    char abub[] = "hell o";
    char babu[] = "o lleh";
    
    
    printf("%s",my_strcat(abub,babu));
    
    return 0;
}

char *my_strcat(char *m ,const char *n)
    {
        char* ptr = m + strlen(m);
        
        while (*n != '\0') 
        { 
            *ptr++ = *n++;
        }
        
        *ptr = '\0';
        
        return m;
    }
