#include <stdio.h>
#include <string.h>

int main (){
	
	int arr[26];
	char word[12];
	
	for (int i=0; i<26; i++){
		scanf("%d", &arr[i]);
	}
	
	scanf("%s", &word);
	
	int lenght = strlen(word);
	int number = 0;
	for (int j=0; j<lenght; j++){
		if (arr[word[j] - 97]>number){
			number = arr[word[j]-97];
		}
	}
	
	int area = number*lenght;
	
	printf("%d\n", area);
	
	return 0;
}
