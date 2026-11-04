#include <stdio.h>

int main(){
    char str[100];
    char vowels[] = "aeiou";
    int length = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
      length++;
    }

    for(int i = 0; str[i] != '\0'; i++){

      for (int j = 0; vowels[j] != '\0'; j++)
      {
        if (str[i] == vowels[j]){
          for (int j = i + 1; j < length; j++)
          {
            str[j - 1] = str[j];
          }
        length--;
        break;
        }
        
      }
      
    }
    for (int i = 0; i < length; i++)
    {
      printf("%c",str[i]);
    }
    
    return 0;
}
