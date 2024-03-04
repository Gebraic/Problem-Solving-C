#include <stdio.h>

int main (){
    
    int n; 
    scanf("%d", &n);
    
    char steps[n];
    
    int level = 0;
    int result = 0;    
        
    for (int i=0; i<n; i++){
        scanf(" %c", &steps[i]);
        if (steps[i] == 'U'){
            level++;
            if (level == 0){
                result++;
            }
        } else if (steps[i] == 'D'){
            level--;
        }
    }
    
    printf("%d\n", result);

    return 0;
}
