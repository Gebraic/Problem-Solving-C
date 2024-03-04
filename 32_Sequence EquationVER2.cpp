#include <stdio.h>

int main (){
	
	int n;
	scanf ("%d", &n);
	
	int number[n], result = 0;
	for (int i=1; i<=n; i++){
		scanf ("%d", &number[i]);
	}
	
	for (int i=1; i<=n; i++){
		int x = 1;
		int y = 0;
		
		while (x <= n){
			if (x == number[i]){
				printf ("num%d  i%d   x%d  y%d\n",number[i], i, x, y);
				for (int j=1; j<=n; j++){
					if (i == number[j]){
						printf("%d\n", j);
					}
				}
			}
			x++;
		}
	}
	
	return 0;
}
