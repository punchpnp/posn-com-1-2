#include<cstdio>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int i;
    int num[8];
    int countSet = 0;
    int sum = 0;
    for(i = 0; i < 8; i++){
        scanf("%d", &num[i]);
        if(num[i] >= x && num[i] <= y){
            sum = sum + num[i];
            countSet++;
        }
    }
    if(countSet != 0){
        printf("%d", sum);
    }
    else
        printf("None");
    return 0;
}
