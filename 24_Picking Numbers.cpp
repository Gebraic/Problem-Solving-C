#include <stdio.h>

int main (){
	
	int n;
	scanf ("%d", &n);
	
	int a[n];
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	int check[n];
	int counter = 0;
	
	for (int i=0; i<n; i++){
		int count = 0;
		int temp = 0;
		int index = 0;
		for (int j=0; j<n; j++){
			if (a[i] - a[j] <= 1 && a[i]-a[j]  >= 0  && i != j){
				if (temp==0){
					temp = a[j];
					index = j;
					count++;
				} else if (temp != 0){
					if (temp - a[j] <= 1 && temp - a[j] >= -1 && index != j){
						count++;
					}
				}
			}
//			printf("i%d a[i]%d j%d a[j]%d temp%d count%d\n", i, a[i], j,a[j], temp, count);
		}
		if (count>0){
			check[counter++] = count;
		}
	}
	
	int max = 0;
	
	for (int i=0; i<counter; i++){
//		printf("%d\n", check[i]);
		if (max < check[i]){
			max = check[i];
		}
	}
	
	printf("%d", max+1);
	
	return 0;
}
