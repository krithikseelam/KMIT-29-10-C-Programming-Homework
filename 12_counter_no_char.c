#include <stdio.h>

int main(){
    char str[100];
    int digits = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
      // ASCII values of 0 to 9 are 48 to 57
      if (str[i] >= 48 && str[i] <= 57)
      {
        digits++;
      }
      
    }
    printf("No of digits in %s = %d\n",str,digits);
    
    return 0;
}
