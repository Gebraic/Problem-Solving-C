#include <stdio.h>

int main(){
	
	long long int arr[5];
	long long int sum = 0;
	
	
	for (int i=0; i<5; i++){
		scanf("%lld", &arr[i]); getchar();
		sum += arr[i];
	}
	
	long long int max = arr[0];
	long long int min = arr[0];
	
	for (int i=0; i<5; i++){
		if (arr[i] > max){
			max = arr[i];
		} else if (arr[i] < min) {
			min = arr[i];
		}
	}
	
	printf("%lld %lld", sum-max, sum-min);
	
	return 0;
}
