#include <stdio.h>

int main (){
	
	int t, n;
	scanf ("%d", &t);
	
	while (t>0){
		
		scanf("%d", &n);
		
		int h = 1;
		
		for (int i=1; i<=n; i++){
			if (i%2 == 1){
				h = 2*h;
			} else {
				h = h + 1;
			}
		}
		printf("%d\n", h);
		t = t -1;
	}
	
	return 0;#include <stdio.h>

int main (){
    
    int t, n;
    scanf ("%d", &t);
    
    while (t>0){
        
        scanf("%d", &n);
        
        int h = 1;
        
        for (int i=1; i<=n; i++){
            if (i%2 == 1){
                h *= 2;
            } else {
                h += 1;
            }
        }
        printf("%d\n", h);
        t--;
    }
    
    return 0;
}
}
