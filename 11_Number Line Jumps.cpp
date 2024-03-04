#include <stdio.h>

int main(){
	
	int x1, v1, x2, v2;
	scanf("%d %d %d %d", &x1, &v1, &x2, &v2); getchar();
	
	if (v2<v1 && (x1-x2)%(v2-v1) == 0){
		printf("YES");
	} else {
		printf("NO");
	}
	
	return 0;
}
