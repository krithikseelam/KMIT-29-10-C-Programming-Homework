#include <stdio.h>

int main(){
  char str[100];
  int count;
  printf("Enter a string: \n");
  scanf("%s",str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    count = 1;
    for (int j = i + 1; str[j] != '\0'; j++)
    {
      if (str[i] == str[j])
      {
        str[j] = '*';
        count++;
      }
      
    }
    if (str[i] != '*')
    {
      printf("%c = %d \n",str[i],count);
    }
  }
  return 0;
}