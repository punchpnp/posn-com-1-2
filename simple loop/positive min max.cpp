#include<stdio.h>
int main(){
    int x[8];
    int i;
    int check = 0;
    int max, min;
    for(i = 0; i < 8; i++){
    	scanf("%d", &x[i]);
    	if(x[i] > 0){
    		if(check == 0){
    			max = x[i];
    			min = x[i];
    			check = 1;
			}
			else if(x[i] > max)
				max = x[i];
			else if(x[i] < min)
				min = x[i];
		}
	}
	printf("%d\n", max);
	printf("%d", min);
    return 0;
}
