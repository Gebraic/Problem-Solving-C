#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++){
    	scanf("%d", &arr[i]);
	}
	
	float countMin = 0, countPlus = 0, count0 = 0;
	
	for (int i=0; i<n; i++){
		if (arr[i] < 0){
			countMin++;
		} else if (arr[i] == 0){
			count0++;
		} else{
			countPlus++;
		}
	}
	
	printf("%f\n", countPlus/n);
	printf("%f\n", countMin/n);
	printf("%f\n", count0/n);
    
    return 0;
}
