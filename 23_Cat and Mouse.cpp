#include <stdio.h>

int main (){
	
	int q;
	scanf("%d", &q);
	
	int x,y,z;
	
	int check = 0;
	
	int RangeA = 0, RangeB = 0;
	
	for (int i = 0; i<q; i++){
		scanf ("%d %d %d", &x, &y, &z);
		
		RangeA = z - x;
		RangeB = z - y;
		
		if (RangeA < 0){
			RangeA *= -1;
		}
		
		if (RangeB < 0){
			RangeB *= -1;
		}
		
		if (RangeB < RangeA){
			check = 0;
		} else if (RangeA < RangeB){
			check = 1;
		} else if (RangeA == RangeB){
			check = 2;
		}
		
		if (check == 0){ 
			printf ("Cat B\n");
		} else if (check == 1){
			printf ("Cat A\n");
		} else if (check == 2){
			printf("Mouse C\n");
		}
	}
	

	
	return 0;
}
