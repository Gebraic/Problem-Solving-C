#include <stdio.h>

int main (){
	
	int n;
	scanf ("%d", &n);
	
	int bird;
	int arr[6] = {0};
	int max = 0;
	
	
	//Input data ke dalam array
	for (int i=0; i<n; i++){
		scanf("%d", &bird);
		arr[bird]++;
	}
	
	//Cari array yang terbesar lalu input nilai i  ke variabel max
	for (int i=0; i<6; i++){
		if (arr[i] > arr[max]){
			max = i;
		}
	}
	
	printf("%d\n", max);

	return 0; 
}
