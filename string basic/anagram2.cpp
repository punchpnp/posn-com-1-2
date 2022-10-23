#include<bits/stdc++.h>
int main(){
    char x[10000];
    scanf("%s", x);
    char y[10000];
    scanf("\n%s", y);
    int count1[8+1] = {};
    int count2[8+1] = {};
    int len1 = strlen(x);
    int len2 = strlen(y);
    int i;
    for(i = 0; i < len1; i++){
        count1[x[i] - 65]++;
    }
    for(i = 0; i < len2; i++){
        count2[y[i] - 65]++;
    }
    for(i = 0; i < 8; i++){
        printf("%d ", count1[i]);
    }
    printf("\n");
    for(i = 0; i < 8; i++){
        printf("%d ", count2[i]);
    }
    printf("\n");
    int ans;
    int sum = 0;
    for(i = 0; i < 8; i++){
        ans = abs(count1[i] - count2[i]);
        printf("%d ", ans);
        sum = sum + ans;
    }
    printf("\n");
    if(sum > 3)
        printf("no");
    else
        printf("anagram");
    return 0;
}
