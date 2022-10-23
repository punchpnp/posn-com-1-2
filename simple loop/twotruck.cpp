#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int w[n];
    int i;
    int car1 = 20000;
    int car2 = 20000;
    for(i = 0; i < n; i++){
        scanf("%d", &w[i]);
    }
    for(i = 0; i < n; i++){
        if(car1 >= w[i]){
            car1 = car1 - w[i];
            printf("1");
        }
        else if(car2 >= w[i]){
            car2 = car2 - w[i];
            printf("2");
        }
        else
            printf("0");
        printf("\n");
    }
    return 0;
}
