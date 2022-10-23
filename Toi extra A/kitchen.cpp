#include<cstdio>
int main(){
    int n;
    scanf("%d" , &n);
    int t[n];
    int r[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &t[i]);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &r[i]);
    }
    int count = 0;
    int check = 0;
    for(i = 0; i < n; i++){
        if(check == 0){
            if(t[i] - r[i] > 0)
                count++;
            check = 1;
        }
        else if(t[i] - t[i-1] >= r[i])
            count++;
    }
    printf("%d", count);
    return 0;
}
