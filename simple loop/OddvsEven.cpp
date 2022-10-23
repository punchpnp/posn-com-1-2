#include<stdio.h>
int main(){
    int x[8];
    int i;
    int sumPo = 0;
    int sumNe = 0;
    for(i = 0; i < 8; i++){
    	scanf("%d", &x[i]);
    	if(x[i] % 2 == 0)
    		sumPo = sumPo + x[i];
    	else
    		sumNe = sumNe + x[i];
	}
	if(sumPo > sumNe)
		printf("even\n");
	else if(sumPo < sumNe)
		printf("odd\n");
	else
		printf("equal\n");
	printf("%d\n", sumPo);
	printf("%d", sumNe);
    return 0;
}
