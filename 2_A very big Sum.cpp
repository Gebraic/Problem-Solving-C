#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    long long int angka[n];
    
    for(int i=0; i<n; i++){
        scanf("%lld", &angka[i]);
    }
    
    long long int hasil = 0;
    
    for(int i=0; i<n; i++){
        hasil += angka[i];
    }
    
    printf("%lld", hasil);
    
    return 0;
}

