#include<stdio.h>
int main(){
    int n;
    scanf("%d\n", &n);
    char x, y;
    int i;

    // input
    int array[n];
    for(i = 0; i < n; i++){ // n = 5
        scanf("%c ", &x);
        array[i] = x; // {0, 1, 2, 3, 4, \0}
    }
    for(i = 0; i < n+1; i++){
    	printf("%c ", array[i]);

    }

    // keyword
//    char cat[n];
//    for(i = 0; i < n; i++){
//        if(x[i] > y[i])
//        	printf("%c ", strcpy(x[i], y[i]) );
//
//        else
//        	printf("%c ", strcpy(y[i], x[i]) );
//
//    }

    // output
//    for(i = 0; i < n; i++){
//        printf("%c ", cat[i]);
//    }
    return 0;
}
