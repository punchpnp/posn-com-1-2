#include<cstdio>
int main(){
    int x;
	int sum = 0;
	int countPo = 0;
	int i;
	for(i = 0; ;i++){
		scanf("%d", &x);
		if(x <= 0)
			break;
		sum = sum + x;
		countPo++;
	}
    printf("%d\n", countPo);
    printf("%d", sum);
    return 0;
}
