#include<cstdio>
int main(){
    int x[100000];
    int i;
    int count = 0;
    for(i = 0; ; i++){
        scanf("%d", &x[i]);
        if(x[i] == 0)
            break;
        count++;
    }
    int k;
    scanf("%d", &k);
    for(i = 0; i < count; i++){
        printf("%d %d", x[i], x[i]%k);
        printf("\n");
    }
    printf("0 0");
    return 0;
}
