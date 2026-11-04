#include <stdio.h>

int main(){
    char str[100];
    int words = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++){
      if (str[i] == ' ')
      {
        words++;
      }
      
    }
    printf("No of words in %s = %d\n",str,words);
    
    return 0;
}
