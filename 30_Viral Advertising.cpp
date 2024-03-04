#include <stdio.h>

int main (){
	
	int n;
	scanf ("%d", &n);
	
	int a = 5, total = 0;
	int arr[n];
	
	for (int i=0; i<n; i++){
		if (i == 0){
			arr[i] = a;
		} else {
			arr[i] = (a/2)*3;
			a = arr[i];
		}
		total += arr[i]/2;
	}
	
	printf ("%d\n", total);
	
	return 0;
}
