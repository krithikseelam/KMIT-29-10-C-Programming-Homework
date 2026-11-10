#include <stdio.h>

int main(){
  char str1[100],str2[100];
  int count1, count2;
  int i, j;
  printf("Enter a string1: \n");
  scanf("%s",str1);
  printf("Enter a string2: \n");
  scanf("%s",str2);
  for (i = 0; str1[i] != '\0'; i++){
    count1 = 0;
    count2 = 0;
    for (j = 0; str1[j] != '\0'; j++){
      if (str1[i] == str1[j]){
        count1++;
      }
    }
    for (j = 0; str2[j] != '\0'; j++){
      if (str1[i] == str2[j]){
        count2++;
      } 
    }
    if (count1 != count2){
      printf("%s and %s are not anagrams \n",str1,str2);
      break;
    }
  }
  if (str1[i] == '\0' && str1[j] == '\0'){
    printf("%s and %s are anagrams",str1,str2);
  }
  return 0;
}