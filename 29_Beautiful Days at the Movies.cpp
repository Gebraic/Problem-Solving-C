#include <stdio.h>
#include <math.h>

int main(){
	
	int n, m, k; 
	scanf ("%d %d %d", &n, &m, &k);
	
	int sum = 0, mod=0, count=0, x =0;
	
	for (int i=n; i<=m; i++){
		x = i;
		
		while (x != 0){
			mod = x%10;
			sum = (sum*10) + mod;
			x = x/10;
		}
		if (abs(i-sum)%k == 0){
			count++;
		}
		sum = 0;
	}
	
	printf ("%d\n", count);
	
	return 0;
}
