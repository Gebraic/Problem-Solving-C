#include <stdio.h>

int main(){
    
    int a[3], b[3];
    int acount=0, bcount=0;
    
    for(int i=0; i<3; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0; i<3; i++){
        scanf("%d", &b[i]);
    }
    
    for (int i=0; i<3; i++){
        if (a[i] > b[i]){
            acount++;
        } else if(b[i] > a[i]){
            bcount++;
        } else {
            acount = acount;
            bcount = bcount;
        }
    }
    printf("%d %d", acount, bcount);
    
    return 0;
}
