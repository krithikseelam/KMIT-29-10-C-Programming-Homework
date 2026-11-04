#include<stdio.h>
int main(){
        char str[100];
        printf("Enter a string: \n");
        scanf("%s",str);
        for(int i = 0; str[i] != '\0'; i ++){
                if(str[i] >= 'a' && str[i] <= 'z'){
                        str[i] -= 32;
                }
        }
        printf("modifies string: %s",str);
        return 0;
}
