#include<cstdio>
int main(){
    int x[100000];
    int i;
    int count = 0;
    for(i = 0; ;i++){
        scanf("%d", &x[i]);
        if(x[i] == 0)
            break;
        count++;
    }
    int m, n;

    scanf("%d %d", &m, &n);
    for(i = 0; i < count; i++){
        if(x[i] % m == n)
            printf("%d ", x[i]);
    }
    return 0;
}
