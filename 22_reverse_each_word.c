#include <stdio.h>

int main(){
    char str[100], temp;
    int index1 = 0, index2 = 0;

    printf("Enter a string:\n");
    scanf("%[^\n]", str);

    for (index2 = 0; str[index2] != '\0'; index2++){
        if (str[index2] == ' '){
            int length = index2 - index1;

            for (int j = 0; j < length/2; j++){
                temp = str[index1 + j];
                str[index1 + j] = str[index2 - 1 - j];
                str[index2 - 1 - j] = temp;
            }

            index1 = index2 + 1;
        }
    }

    int length = index2 - index1;

    for (int j = 0; j < length/2; j++){
        temp = str[index1 + j];
        str[index1 + j] = str[index2 - 1 - j];
        str[index2 - 1 - j] = temp;
    }

    printf("After Reversing Each Word: %s\n", str);

    return 0;
}