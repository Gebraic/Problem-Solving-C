#include <stdio.h>

int main (){
    
    int  n; 
    scanf("%d", &n);
    
    int score[n];
    
    int max=0;
    int min=0;
    int count_max = 0;
    int count_min = 0;
    
    for (int i=0; i<n; i++){
        scanf("%d", &score[i]);
    }
    
    max = min = score[0];
    
    for (int i=0; i<n; i++){
        if (score[i]>max){
            max = score[i];
            if(score[i] == max){
                count_max++;
            }
        } 
        
        if (score[i]<min){
            min=score[i];
            if (score[i] == min){
                count_min++;
            }
        }
    }
    
    printf("%d %d", count_max, count_min);
    
    return 0;
}

