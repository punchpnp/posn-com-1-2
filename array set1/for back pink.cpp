#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int i;

    for(i = 1; i <= n; i++){
        scanf("%d", &x[i]);
    }
    int k;
    scanf("%d", &k);
    if(k >= 0){
        for(i = 1; i <= n; i++){
            printf("%d ", x[i] + k);
        }
    }
    else{
        for(i = n; i >= 1; i--){
            printf("%d ", x[i] + k);
        }
    }


    return 0;
}
