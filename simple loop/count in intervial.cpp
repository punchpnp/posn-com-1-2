#include<cstdio>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int num[8];
    int i;
    int countNum = 0;
    for(i = 0; i < 8; i++){
        scanf("%d", &num[i]);
        if(y > x){
            if(num[i] >= x && num[i] <= y)
            countNum++;
        }
        else if(x > y){
            if(num[i] >= y && num[i] <= x)
            countNum++;
        }
    }
    if(countNum > 0)
        printf("%d", countNum);
    else
        printf("None");
    return 0;
}
