#include<bits/stdc++.h>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    int c = 1;
    int check1 = n;
    int check2 = n + ( (n-1)*2 );
    int check3 = n + 1;

    int newCheck1;
    int newCheck2;
    int newCheck3;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i - j < n && j == 1){
                newCheck1 = check1 % 10;
                printf("%d ", abs(newCheck1));
                check1--;
            }
            else if(i == j){
                newCheck3 = check3 % 10;
                printf("%d ", abs(newCheck3));
                check3++;
            }
            else if(j - i < n && j == n){
                newCheck2 = check2 % 10;
                printf("%d ", abs(newCheck2));
                check2--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
