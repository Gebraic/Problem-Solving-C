#include <stdio.h>

int main(){
	
	int n; 
	scanf ("%d", &n);
	
	int number[n];
	
	for (int i=1; i<=n; i++){
		scanf ("%d", &number[i]);
	}
	
	for (int x = 1; x <= n; x++){
		for (int j=1; j<=n; j++){
			if (x == number[j]){
				for (int k=1; k<=n; k++){
					if (j == number[k]){
						printf ("%d\n", k);
					}
				}
			}
		}
	}
	
	
	return 0;
}
