#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    int x1, x2, y1, y2;
    scanf("%d %d", &x1, &x2);
    scanf("%d %d", &y1, &y2);
    //check
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for(i = 0; i < n; i++){
        if(x[i] >= x1 && x[i] <= x2)
            count1++;
        else if(x[i] >= y1 && x[i] <= y2)
            count2++;
        else
            count3++;
    }
    printf("%d\n", count1);
    printf("%d\n", count2);
    printf("%d", count3);
    return 0;
}
