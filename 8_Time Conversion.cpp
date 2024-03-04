#include <stdio.h>
#include <string.h>

int main(){
    
    char tanggal[20];
    int jam;
    
    scanf ("%d %s", &jam, tanggal);
    
    int length = strlen(tanggal);
    
	if (strstr(tanggal, "PM")){
		if (jam>1 && jam<12){
			jam += 12;
		} else if (jam == 12){
			jam = jam;
		}
	} else if (strstr(tanggal, "AM")){
		if (jam == 12){
			jam = 0;
		} else {
			jam = jam;
		}
	}    
	
    printf ("%02d%.6s",jam,tanggal);
    
    return 0;
}
