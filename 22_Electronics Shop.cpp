#include <stdio.h>

int main(){
	
	int b, k, d;
	scanf("%d %d %d", &b, &k, &d);
	
	int keyboard[k], drive[d];
	
	for (int i=0; i<k; i++){
		scanf("%d", &keyboard[i]);
	}
	
	for (int j=0; j<d; j++){
		scanf("%d", &drive[j]);
	}
	
	int result = -1;
	int sum = 0;
	
	for (int i=0; i<k; i++){
		for (int j=0; j<d; j++){
			sum = keyboard[i] + drive[j];
			if (sum <= b){
				if (b - sum < b - result){
					result = sum;
				}
			} 
		}
	}
	
	printf("%d \n", result);
	
	return 0;
}
