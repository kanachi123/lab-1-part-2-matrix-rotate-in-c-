#include <stdio.h>

int my_strcmp(const char *s1,const char *s2);


int main()
{
    char x[] = "hello";
    char b[] = "hell";
    char k[] = "hello";
    
    int c = my_strcmp(x,b);
    printf(" %d\n",c);
    
    c = my_strcmp(b,x);
    printf("%d\n",c);
    
    c = my_strcmp(k,x);
    printf(" %d\n",c);
    
    return 0;
}

int my_strcmp(const char *s1,const char *s2)
{
    
    while(*s1 != '\0')
    {
        
        if(*s1 != *s2)
        {
            break;
        }
        s1++;
        s2++;
        
    }
    // եթե 2-րդ տողը ավելի երկար է վերադարձնում ենք -1(0 - ... > 0) 
    if(*s2 != '\0')
    {
        return -1;
    }
    
    // եթե տողերի կոդերի տարբերությունը դրական է ուրեմն վերադարձնում ենք 1
    if((*s1-*s2) > 0)
    {
        return 1;
    }
    
    // եթե վերևի 2 if-երը չաշխատեցին ուրեմն տողերը համընկնում են
    else 
        return 0;
    
}

