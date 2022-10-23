#include<cstdio>
int main(){
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int x[n+1];
    int i, j;

    // input
    for(i = 1; i <= n; i++){
        scanf("%d", &x[i]);
    }

    // keyword
    int sum = 0;
    int check = 0;
    int count = 1;
    int max;
    for(i = 0; i < n; i++){
        for(j = i+1; j <= n; j++){
            count++;
            sum = sum + x[j];
            if(check == 0 && count == k){
                max = sum;
                check = 1;
            }
            else if(count == k && sum > max){
                max = sum;
            }
            if(count == k){
                count = 0;
                sum = 0;
                break;
            }
        }
    }
    printf("%d", max);
    return 0;
}
