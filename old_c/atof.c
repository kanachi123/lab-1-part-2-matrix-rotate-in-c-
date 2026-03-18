#include <stdio.h>
#include <stdlib.h>

double my_atof(const char *str);

int main()
{
    char toxxxx[] = " -5.89-4.9jjihuv6..6";
    
    double llll = my_atof(toxxxx);
    printf("\n");
    printf("my_atof >>> %lg\n",llll);
    
    llll = atof(toxxxx);
    printf("atof >>> %lg\n",llll);
    
    return 0;
    
}

double my_atof(const char *str) 
{
    
    double result = 0.0; // արդյունքը պահպանելու համար փոփոխական
    int sign = 1; // նշանը պահպանելու համար փոփոխական
    int flag = 0;
    double factor = 1.0; // double սարքելու համար փոփոխական
  
      // անցնում ենք բացատային նշանների վրայով
    while (*str == ' ' || *str == '\t' || *str == '\n') 
    {
        str++;
    }
      
      // առաջին սիմվոլի օգնությամբ իմանում ենք թվի նշանը
    if (*str == '-') 
    {
        sign = -1;
        str++;
    } 
      
    else if (*str == '+') 
    {
        str++;
    }
      
    // սիմվոլները թիվ ենք սարքում ու արդյունքը պահպանում
      
    while (*str != '\0') 
    {
        if (*str >= '0' && *str <= '9') 
        {
            result = result * 10.0 + (*str - '0');
          
            if (flag == 1) 
            {
                factor *= 0.1;
            }
            printf("result = %lg\t\tresult*sign*factor  = %lg\n",result,result * sign *factor);
        
        } 
        
        else if (*str == '.') 
        {
          // եթե ․ ենք հանդիպում ՝
          flag = 1;
        } 
        
        else 
        {
            break;
        }
        
        str++;
    }
      
  return result * sign * factor;
}
