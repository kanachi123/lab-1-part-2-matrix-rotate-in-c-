#include<stdio.h>
#include<stdlib.h>

int my_atoi(const char *str);

int main(){
    
    char tivvv[] = "   67  45..9jjg.79pp5 5 " ;
    
    int digit = my_atoi(tivvv);
    printf("my atoi >>> %d\n",digit);
    digit = atoi(tivvv);
    printf("atoi >>> %d\n",digit);
    
    return 0;
}


int my_atoi(const char *str) {
    
    int result = 0; // թիվը պահպանելու համար փոփոխական
    int sign = 1; // նշանը պահպանելու համար փոփոխական
    
    if (str == NULL) //ստուգում ենք, որ ցուցիչը NULL-ի վրա ցույց չտա 
    {
        return printf("արգումենտը չի կարող NULL լինել\n"); 
    }
    
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
  // սիմվոլները թիվ ենք սարքում ու արդյունքը վերագրում ենք result-ին
  while (*str >= '0' && *str <= '9') {
    result = result * 10 + (*str - '0');
    str++;
  }
  // թիվը բազմապատկում ենք իր նշանով
  return result * sign;
}

