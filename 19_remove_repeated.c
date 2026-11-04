#include <stdio.h>

int main(){
    char str[100];
    int length = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
      length++;
    }

    for (int i = 0; i < length; i++)
    {
      for (int j = i + 1; j < length; j++)
      {
        if (str[i] == str[j])
        {
          for (int k = j + 1; k < length; k++)
          {
            str[k - 1] = str[k];
          }
          length--;
          
        }
        
      }
      
    }
    
    for (int i = 0; i < length; i++)
    {
      printf("%c",str[i]);
    }
    
    return 0;
}
