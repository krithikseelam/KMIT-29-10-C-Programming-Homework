#include <stdio.h>

int main(){
  char str[100], target;
  int index = -1;
  printf("Enter a string: \n");
  scanf("%s",str);
  printf("Enter the target\n");
  scanf(" %c",&target);
  
  for (int i = 0; str[i] != '\0'; i++)
  {
    if(str[i] == target){
      index = i;
      break;
    }
  }
  
  printf("Index where the target is found: %i \n", index);
  
  return 0;
}