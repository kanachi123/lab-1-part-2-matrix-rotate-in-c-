//strlen

#include <stdio.h>

//strlen-ը վերադարձնում է size_t տիպի տվյալ և ընդունում է տողի հաստատուն ցուցիչ
size_t my_strlen(const char* str);


int main()
{
    
    char matrix[] = "hell o" ;
    
    //size_t տիպի տվյալի սպեցիֆիկատորը %zu - ն Է
    printf("%zu",my_strlen(matrix));

    return 0;
}

size_t my_strlen(const char* str)

    {
        size_t k = 0;
        
        //անցնում ենք տողի բոլոր անդամներով քանի դեր '\0' չի
        
        while ( str[k++] != '\0' );
        
        //վերադարձնում ենք k-1 քանի որ '\0' չենք հաշվում
        
        return --k; 
    }

