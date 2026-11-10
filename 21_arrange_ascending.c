#include <stdio.h>

int main(){
  char str[100];
  char temp;
  printf("Enter a string: \n");
  scanf("%s",str);
  for (int i = 0; str[i] != '\0'; i++){
    for (int j = i + 1; str[j] != '\0'; j++){
      if (str[i] > str[j]){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
  printf("Ascending order: %s\n",str);
  
  return 0;
}