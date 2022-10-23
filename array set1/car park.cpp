#include<cstdio>
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int num;
    scanf("%d", &num);
    int i, j;
    int x, y;
    
    int paper[M][N] = {};
    for(i = 0; i < num; i++){
    	scanf("%d %d", &x, &y); // 1 1
    	paper[x-1][y-1] = 1;
	}
	
	for(i = 0; i < M; i++){
		for(j = 0; j < N; j++){
			if(paper[i][j] == 0)
				printf("_");
			else
				printf("x");
		}
		printf("\n");
	}
    return 0;
}
