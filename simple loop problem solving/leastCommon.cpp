#include<cstdio>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int minn = a;
    int x[3] = {a, b, c};
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(x[j] > x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    for(i = 1; ; i++){
        if( (x[0] * i) % x[1] == 0 && (x[0] * i) % x[2] == 0)
            break;
    }
    printf("%d", x[0] * i);
    return 0;
}
