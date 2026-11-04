#include<stdio.h>
int main(){
        char name[30];
        char vowels[] = "aeiou";
        int count_vo = 0;
	int i;
        printf("Name: \n");
        scanf("%s",name);
        for(i = 0; name[i] != '\0'; i++){
                for(int j = 0; vowels[j] != '\0'; j++){
                        if(name[i] == vowels[j]){
                                count_vo++;
                        }
                }
        }
	int consonents = i - count_vo;
        printf("consonets: %d",consonents);
        return 0;
}
