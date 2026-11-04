#include <stdio.h>

int main(){
  char str[100], target;
  int count = 0;
  printf("Enter a string: \n");
  scanf("%s",str);
  printf("Enter the target\n");
  scanf(" %c",&target);
  
  for (int i = 0; str[i] != '\0'; i++)
  {
    if(str[i] == target){
      count++;
    }
  }
  
  printf("%c occurres %d times in string",target, count);
  
  return 0;
}