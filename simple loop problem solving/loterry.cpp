#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    int i, j;
    int x;
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        x = x % 1000;
        array[i] = x;
    }
    int k;
    scanf("%d", &k);
    int prize[k];
    for(i = 0; i < k; i++){
        scanf("%d", &prize[i]);
    }
    int count = 0;
    // check prize
    for(i = 0; i < n; i++){
        for(j = 0; j < k; j++){
            if(array[i] == prize[j])
                count++;
        }
    }
    printf("%d", count);

    return 0;
}
