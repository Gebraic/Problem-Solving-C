#include <stdio.h>

int main (){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int bill[n];
	int item = 0;
	int b;
	int sum =0;
	
	for (int i=0; i<n; i++){
		scanf("%d", &bill[i]);
		
		if (i==k){
			item = bill[i];
		} else {
			sum += bill[i];
		}
	}
	
	scanf("%d", &b);
	
	int bill_actual = sum/2;
	int formula = b - bill_actual;
	
	if (bill_actual == b){ 
		printf ("Bon Appetit\n");
	} else {
		printf("%d\n", formula);
	}
	
	return 0;
}
