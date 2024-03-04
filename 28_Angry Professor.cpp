#include <stdio.h>

int main (){
	
	int t; 
	scanf ("%d", &t);
	
	for (int i=0; i<t; i++){
		int n, k;
		scanf("%d %d", &n, &k);
		int a[n];
		int count = 0;
		
		for (int j=0; j<n; j++){
			scanf("%d", &a[j]);
			if (a[j] <= 0){
				count++;
			}
		}
		
		if (count < k){
			printf ("YES\n");
		} else if (count>=k){
			printf("NO\n");
		}
	}
	
	return 0;
}
