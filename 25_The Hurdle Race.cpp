#include <stdio.h>

int main (){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int arr[n];
	int max = 0;
	int result = 0;
	
	for (int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		
		if (max < arr[i]){
			max = arr[i];
		}
	}
	
	result = max - k;
	
	if (result<0){
		printf ("0\n");
	} else {
		printf ("%d\n", result);
	}
	
	return 0;
}
