#include<stdio.h>
int main(){
	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	int x[8];
	int i;
	float sumGrade = 0;
	for(i = 0; i < 8; i++){
		scanf("%d", &x[i]);
	}
	for(i = 0; i < 8; i++){
		if(x[i] >= A){
			printf("4\n");
			sumGrade = sumGrade + 4;
		}
		else if(x[i] >= B){
			printf("3\n");
			sumGrade = sumGrade + 3;
		}
		else if(x[i] >= C){
			printf("2\n");
			sumGrade = sumGrade + 2;
		}
		else if(x[i] >= D){
			printf("1\n");
			sumGrade = sumGrade + 1;
		}
		else
			printf("0\n");
	}
	printf("%f", sumGrade/8);
	return 0;
}
