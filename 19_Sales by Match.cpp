#include <stdio.h>

int main(){
	
	int n;
	scanf ("%d", &n);
	
	int angka;
	int arr[101];
	
	int ans =0;
	
	for(int i=0; i<101; i++){
		arr[i] =0;
	}
	
	for (int i=0; i<n; i++){
		scanf("%d", &angka);
		arr[angka]++;
	}
	
	for (int i=0; i<101; i++){
		if(arr[i]>1){
			if  (arr[i] %2 ==0){
				ans += (arr[i]/2);
			} 
			else {
				ans += ((arr[i]-1)/2);
			}
		}
	}
	
	printf("%d", ans);
	
	return 0;
}
