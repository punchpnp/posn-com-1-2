#include<cstdio>
int main(){
    int rock, n;
    scanf("%d %d", &rock, &n);
    int i, j;
    int rockmirror[rock] = {};

    int x;
    for(j = 0; j < n*2; j++){
        scanf("%d", &x);
        if(j % 2 == 0)
            rockmirror[x-1] = 1;
        else
            rockmirror[x-1] = 2;
    }
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(i = 0; i < rock; i++){
        if(rockmirror[i] == 0)
            count0++;
        else if(rockmirror[i] == 1)
            count1++;
        else if(rockmirror[i] == 2)
            count2++;
    }
    printf("%d ", count0);
    printf("%d ", count1);
    printf("%d ", count2);

    return 0;
}
