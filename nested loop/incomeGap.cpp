#include<cstdio>
int main(){
	int n;
	scanf("%d", &n);
	int x[n+1][5];
	int i, j;
	
	// input
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 5; j++){
			scanf("%d", &x[i][j]);
		}
	}
	
	int min[n+1], max[n+1], ans[n+1];
	int check = 0;
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 5; j++){
			if(check == 0){
				min[i] = x[i][j];
				max[i] = x[i][j];
				check = 1;
			}
			else if(x[i][j] < min[i])
				min[i] = x[i][j];
			else if(x[i][j] > max[i])
				max[i] = x[i][j];
			if(j == 5){
				ans[i] = max[i] - min[i];
				check = 0;
			}
		}
	}
	
	// sort ans
	for(i = 1; i <= n-1; i++){
		for(j = 1; j <= n-1; j++){
			if(ans[j] > ans[j+1]){
				int temp = ans[j];
				ans[j] = ans[j+1];
				ans[j+1] = temp;
			}
		}
	}
	
	printf("%d ", ans[n]);
	printf("%d ", ans[1]);
	printf("%d", ans[n] - ans[1]);
	return 0;
}
    
