#include <stdio.h>

int main(){
    
    int n,m;
    scanf ("%d %d", &n, &m);
    
    int a[n], b[m];
    int min = 0; 
    int max = 0; 
    int count = 0;
    
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);getchar();
        max = a[0];
        if (a[i]>max){
            max = a[i];
        }
    }
    for (int j=0; j<m; j++){
        scanf("%d", &b[j]); getchar();
        min = b[0];
        if (b[j] < min){
            min = b[j];
        }
    }
    
    for(int i=max; i<=min; i++){
        int flag = 1;
        for (int a_i=0; a_i<n; a_i++){
            for (int b_i=0; b_i<m; b_i++){
                if (i%a[a_i] !=0 || b[b_i]%i !=0){
                    flag = 0;
                }
            }
        }
        if (flag){
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
