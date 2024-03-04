#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int kiri =0, kanan, r = 0, l = 0;
	
	int angka[n][n];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &angka[i][j]);
		}
	}
	
	while (kiri<n){
		l = l + angka[kiri][kiri];
		kiri++;
	}
	
	kanan = n-1, kiri = 0;
	
	while(kiri<n){
		r = r + angka[kiri][kanan];
		kanan--;
		kiri++;
	}
	
	int hasil = l - r;
	
	if (r>l){
		hasil = hasil*(-1);
	} else {
		hasil = hasil;
	}
	
	printf("%d", hasil);
	
	return 0;
}
