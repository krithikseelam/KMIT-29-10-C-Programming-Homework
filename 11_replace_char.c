#include <stdio.h>

int main(){
  char str[100],old,new;
  printf("Enter a string: \n");
  scanf("%s",str);
  printf("oldchar newchar\n");
  scanf(" %c %c",&old,&new);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == old)
    {
      str[i] = new;
    }
    
  }
  printf("new string %s\n",str);
  return 0;
}