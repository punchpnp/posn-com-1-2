#include<bits/stdc++.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n > 'Z' || n < 'A')
        printf("unsupported code");
    else
        printf("%c", n);
    return 0;
}
