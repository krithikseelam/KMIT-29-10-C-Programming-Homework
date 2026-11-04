#include<stdio.h>
int main(){
        char str[100];
        int length = 0, i;
        printf("Enter a string: \n");
        scanf("%s",str);
        for(i = 0; str[i]!= '\0'; i++){
                length++;
        }
	char reverse[length];
        for(i = 0; i < length; i++){
                reverse[i] = str[length - i - 1];
        }
	for(i = 0; i < length; i++){
		if(str[i] != reverse[i]){
			break;
		}
	}
	if(str[i] == '\0'){
		printf("%s is a palindrome",str);
	}
	else{
		printf("%s is not a palindrome",str);
	}
        return 0;
}
