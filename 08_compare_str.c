#include<stdio.h>

int main(){

    char str1[100], str2[100];
    int i;

    printf("Enter string1, string2: \n");

    scanf("%s %s", str1, str2);

    for(i = 0; str1[i] != '\0'; i++){

        if(str1[i] != str2[i]){
            break;
        }
    }

    if(str1[i] == '\0' && str2[i] == '\0'){
        printf("Equal");
    }
    else{
        printf("Not equal");
    }

    return 0;
}
