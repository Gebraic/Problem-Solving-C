#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int arr[n];
	
	for (int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		
		if (arr[i] >= 38){
			if (arr[i]%5 > 2){
				arr[i] = arr[i] + 5 - arr[i]%5;
			} else if(arr[i]%5<2){
				arr[i] = arr[i];
			}
		} else {
			arr[i] = arr[i];
		}
	}
	
	for (int i=0; i<n; i++){
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
