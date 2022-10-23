#include<cstdio>
int main(){
    int x[10000];
    int i;
    int check = 0;
    int loop, loopNum;
    int loopNew = 1;
    for(i = 0; ; i++){
        scanf("%d", &x[i]);
        if(x[i] == 0)
            break;
        if(check == 0){
            loop = 1;
            loopNum = x[i];
            check = 1;
        }
        if(x[i] == x[i+1]){
            loopNew++;
            if(loopNew > loop){
                loop = loopNew;
                loopNum = x[i];
            }
        }
        else
            loopNew = 1;
    }
    printf("%d\n", loop);
    printf("%d", loopNum);
    return 0;
}
