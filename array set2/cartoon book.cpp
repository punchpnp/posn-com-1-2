#include<bits/stdc++.h>
int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int y[n];
    int i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &y[i]);
    }
    int min3, min2, min1;
    int ans3, ans2, ans1;

    int check3 = 0, check2 = 0, check1 = 0;
    for(i = 0; i < n; i++){
        if(x[i] == 3){
            if(check3 == 0){
                min3 = y[i];
                check3 = 1;
                ans3 = i+1;
            }
            else if(y[i] < min3){
                min3 = y[i];
                ans3 = i+1;
            }
        }
        else if(x[i] == 2){
            if(check2 == 0){
                min2 = y[i];
                check2 = 1;
                ans2 = i+1;
            }
            else if(y[i] < min2){
                min2 = y[i];
                ans2 = i+1;
            }
        }
        else if(x[i] == 1){
            if(check1 == 0){
                min1 = y[i];
                check1 = 1;
                ans1 = i+1;
            }
            else if(y[i] < min1){
                min1 = y[i];
                ans1 = i+1;
            }
        }
    }
    //printf("%d %d\n", ans1, min1);
    //printf("%d %d\n", ans2, min2);
    //printf("%d %d\n", ans3, min3);

    if(min1 + min2 < min3)
        printf("%d %d %d", ans1, ans2, min1+min2);
    else
        printf("%d %d %d", ans3, ans3, min3);
    return 0;
}
