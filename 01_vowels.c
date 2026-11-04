#include<stdio.h>
int main(){
	char name[30];
	char vowels[] = "aeiou";
	int count_vo = 0;
	printf("Name: \n");
	scanf("%s",name);
	for(int i = 0; name[i] != '\0'; i++){
		for(int j = 0; vowels[j] != '\0'; j++){
			if(name[i] == vowels[j]){
				count_vo++;
			}
		}
	}
	printf("vowels: %d",count_vo);
	return 0;
}
