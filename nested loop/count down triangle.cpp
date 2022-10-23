#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    int newN = n;
    for(i = 1; i <= n; i++){ //
        for(j = 1; j <= n; j++){
            if(n < 10){
                if(i - j > 0)
                    printf(" ");
                else{
                    printf("%d", newN);
                }
            }
            else if(n >= 10){
                newN = newN % 10;
                if(i - j > 0)
                    printf(" ");
                else{
                    printf("%d", newN);
                }
            }
        }
        if(newN > 0)
            newN--;
        else if(newN < 0){
            newN--;
            newN = newN * (-1);
        }
        else if(newN == 0){
            newN = 10;
            newN--;
        }
        printf("\n");
    }
    return 0;
}
