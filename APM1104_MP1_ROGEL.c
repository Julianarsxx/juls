#include <stdio.h>


int F(int num) {
    int f = 0, i = 1, b;
    
    while (f < num) {
        b = f + i;
        f = i;
        i = b;
    }
    
    return (f == num);
}


void FS(int num){
    int k = 0, j = 1, nx;
    printf("Fibonacci Sequence up to %d:\n\n", num);
    
    while (k <= num) {
        printf("%d ", k);
        nx = k + j;
        k = j;
        j = nx;
    }
    
    printf("\nPROGRAM TERMINATED!!!!!\n\n");
}

int main() {
	
    int i;
    
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &i);
        
        if (i == 0) {
        	
            printf("PROGRAM TERMINATED!!!!!\n\n");
            break;
            
        }
        if (F(i)) {
            FS(i);
            
            break;
            
        } else {
            printf("%d is not a Fibonacci number!\n\n", i);
    }
        
    }
    
    return 0;
}

