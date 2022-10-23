#include<cstdio>

int main(){
	int n;
	scanf("%d", &n);
	int i;
	int x[10000];

	int max = 0;
	int countSame = 0;
	int countMax = 1;
	int pass = 0;
	int count = 0;
	for(i = 0;;i++){
		scanf("%d", &x[i]);
		if(x[i] == 0)
			break;
		count++;
	}

	for(i = 0; i < count; i++){
		if(n == x[i]){
			countSame++;
			if(x[i] == x[i-1]){
				countMax++;
				if(max < countMax)
					max = countMax;
			}
			else
				countMax = 1;
		}
	}
	printf("%d\n", max);
	printf("%d", countSame);

	return 0;
}
