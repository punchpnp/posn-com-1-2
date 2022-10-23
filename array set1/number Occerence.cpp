#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n+1];
    int i;
    for(i = 1; i <= n; i++){
        scanf("%d", &x[i]);
    }
    int k;
    int key = 0;
    scanf("%d", &k);
    for(i = 1;i <= n; i++){
        if(x[i] == k){
        	printf("%d ", i);
        	key = 1;
		}
        else if(x[i] != k && key == 0 && i == n)
            printf("0");
    }
    return 0;
}
