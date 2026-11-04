#include <stdio.h>

int main(){
  char str[100];
  int digits = 0, alphabets = 0, special = 0;
  printf("Enter a string: \n");
  scanf("%s",str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 65 && str[i] <= 122)
    {
      alphabets++;
    }
    else if (str[i] >=48 && str[i] <=57)
    {
      digits++;
    }
    else{
      special++;
    }
    
  }
  printf("Alphabets = %d Digits = %d Special = %d \n", alphabets,digits,special);
  
  return 0;
}