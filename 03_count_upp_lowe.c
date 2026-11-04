#include <stdio.h>

int main(){
    char str[100];
    int upper = 0, lower = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            upper++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            lower++;
        }
    }

    printf("Uppercase = %d, Lowercase = %d", upper, lower);

    return 0;
}
