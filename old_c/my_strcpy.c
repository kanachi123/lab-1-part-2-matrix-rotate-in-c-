#include <stdio.h>
#include <string.h>

char *my_strcpy(char *s1,const char *s2);


int main()
{
    char x[] = "hello";
    char v[] = "auto";
    
    my_strcpy(x,v);
    
    printf("%s",x);

    return 0;
}

char *my_strcpy(char *s1, const char *s2)
{
    // ստուգում ենք որ արգումենտները NULL ցույց չտան(*s1,*s2 սխալ կտան)
    if (s1 == NULL || s2 == NULL)
    {
        return NULL;
    }

    char *p = s1;

    // s2-ի պարունակությունը copy ենք անում s1-ի մեջ
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    
    *s1 = '\0';
    
    //եթե երկրորդ տողի երկարությունը ավելի երկար է քան առաջինը ֆունկցիան չի աշխատի
    
    return p;
}