#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int m, d;
    scanf("%d %d", &d, &m);
    
    int count=0;
    
    for (int i=0; i<n; i++){
        int sum = 0;
        
        if (i+m<=n){
            for (int j=0; j<m; j++){
                sum+=arr[i+j];
            }
            if (sum == d){
                count++;
            }
        }
        
    }
    
    printf("%d\n", count);
    
    return 0;
}
