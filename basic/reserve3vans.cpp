#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    int A = 0;
    int B = 0;
    int C = 0;
    for(i = 0; i < n; i++){
    	for(j = 0; ; j++){
    		if(A == 0){
    			A = A + x[i];
    			printf("A\n");
    			break;
			}
			else if(B == 0){
    			B = B + x[i];
    			printf("B\n");
    			break;
			}
			else if(C == 0){
    			C = C + x[i];
    			printf("C\n");
    			break;
			}
			if(A > 0)
    			A = A - 1;
    		if(B > 0)
    			B = B - 1;
    		if(C > 0)
    			C = C - 1;
		}
	}
    return 0;
}
