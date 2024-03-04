#include <stdio.h>

int main(){
	
	int tahun;
	scanf("%d", &tahun);
	
	int day=13;
	int month = 9;
	
	if (tahun >= 1700 && tahun <=1917){
		if (tahun%4 == 0){
			day = 12;
		}
	} else if (tahun == 1918){
		day = 26;
	} else if (tahun >1918){
		if (tahun%4 == 0 && tahun%100 != 0  || tahun%400 == 0 ){
			day = 12;
		}
	}
	
	printf("%02d.%02d.%d\n", day, month, tahun);
	
	return 0;
}
