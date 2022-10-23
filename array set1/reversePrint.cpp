#include<cstdio>
int main(){
    int x[10000];
    int i;
    int count = 0;
    for(i = 1; ;i++){
        scanf("%d", &x[i]);
        if(x[i] == 0)
            break;
        count++;
    }
    for(i = count; i >= 1; i--){
        printf("%d ", x[i]);
    }
    return 0;
}
