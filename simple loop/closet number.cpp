#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int check = 0;
    int ans;
    int aaah, answer;
    int i;
    int x[8];
    for(i = 0; i < 8; i++){
        scanf("%d", &x[i]);
        ans = n - x[i];
        if(ans < 0)
            ans = ans * (-1);
        if(check == 0){
            aaah = ans;
            check = 1;
            answer = x[i];
        }
        else if(ans < aaah){
            aaah = ans;
            answer = x[i];
        }
    }
    printf("%d", answer);

    return 0;
}
