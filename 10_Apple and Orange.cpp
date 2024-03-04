#include <stdio.h>

int main (){
	
	int s, t;
	scanf("%d %d", &s, &t);
	
	int apple, orange;
	scanf("%d %d", &apple, &orange);
	
	int NumOfApple, NumOfOrange;
	scanf("%d %d", &NumOfApple, &NumOfOrange);
	
	int arrApple[NumOfApple], arrOrange[NumOfOrange];
	
	for (int i=0; i<NumOfApple; i++){
		scanf("%d", &arrApple[i]);
	}
	
	for(int i=0; i<NumOfOrange; i++){
		scanf("%d", &arrOrange[i]);
	}
	
	int countApple = 0, countOrange = 0;
	
	for (int i=0; i<NumOfApple; i++){
		if (apple + arrApple[i] >= s && apple + arrApple[i] <= t){
			countApple++;
		}
	}
	
	for (int i=0; i<NumOfOrange; i++){
		if (orange + arrOrange[i] >= s && orange + arrOrange[i] <= t){
			countOrange++;
		}
	}
	
	printf("%d\n%d", countApple, countOrange);
	
	return 0;
}
