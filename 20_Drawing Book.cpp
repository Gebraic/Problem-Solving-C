#include <stdio.h>

int main (){
	
	int n, p;
	scanf("%d\n%d", &n, &p);
	
	int result = 0;
	
	if (p <= n/2){
		result = p/2;
	} else if (n%2 == 0 && (n-p) == 1){
		result = 1;
	} else {
		result = (n-p)/2;
	}
	
	printf("%d\n", result);
	
	return 0;
}
