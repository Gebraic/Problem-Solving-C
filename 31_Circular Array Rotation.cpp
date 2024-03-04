#include <stdio.h>

int main (){
	int n, k, q;
	scanf("%d %d %d", &n, &k, &q);
	
	int mod = k%n; 
	int arr[n];
	
	for (int i=mod; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for (int i=0; i<mod; i++){
		scanf("%d", &arr[i]);
	}
	int c = 0;
	for (int i=0; i<q; i++){
		scanf ("%d", &c);
		printf("%d\n", arr[c]);
	}
	
	return 0;
}
