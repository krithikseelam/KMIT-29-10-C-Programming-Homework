#include<stdio.h>
int main(){
	char str[100];
	int length = 0,temp;
	printf("Enter a string: \n");
	scanf("%s",str);
	for(int i = 0; str[i]!= '\0'; i++){
		length++;
	}
		
	for(int i = 0; i < length/2; i++){
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}	
	printf("Reversed string: %s",str);
	return 0;
}
