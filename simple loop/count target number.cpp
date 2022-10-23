#include<cstdio>
int main(){
    int x[10000];
    int i;
    int countNum = 0;
    for(i = 0; ; i++){
        scanf("%d", &x[i]);
        if(x[i] == 0)
            break;
        if(i > 0){
            if(x[i] == x[0])
            countNum++;
        }

    }
    if(countNum != 0)
        printf("%d", countNum);
    else
        printf("None");
    return 0;
}
