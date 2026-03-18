#include <stdio.h>
#define size 200

int main()
{
    char c,text[size];
    int i = 0,key;
    
    printf("enter text to encrypt\n");
    while((c = getchar()) != '\n'){
        
        text[i] = c;
        i++;
        printf("%c",text[i]);
    }
    text[i] = '\0';
    printf("\n");
    
    printf("enter the key (a number from 0 to 25 inclusive)\n");
    scanf("%d",&key);
    
    while(key>25 || key<1){
        
        printf("enter the key (A NUMBER FROM 0 TO 25 INCLUSIVE)\n");
        scanf("%d",&key);
    }
    
    char a;
    for(int j = 0;j < i;j++){
        
        a = text[j] + key;
        
        if((a <= 'z' && text[j]>='a')||(a <= 'Z' && text[j]>='A'))
        {
            text[j] = a;
        }
        else if( a >'z' && text[j]>='a' && text[j] < 'z'){
            
            text[j] = 'a' + ('z'-(text[j]+key));
        }
        else if( a >'Z' && (text[j]>='A' && text[j] < 'Z')){
            
            text[j] = 'A' + ('Z'-(text[j] + key));
        }
        printf("%c",text[j]);
    }

    return 0;
}

