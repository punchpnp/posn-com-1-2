#include<cstdio>
#include<cstring>
int main(){
    char x[10000];
    scanf("%[^\n]", x);
    int len = strlen(x);

    //printf("%d", len);
    int i;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int F = 0;
    int G = 0;
    int H = 0;

    for(i = 0; i < len; i++){
        if(x[i] == 'A')
            A++;
        if(x[i] == 'B')
            B++;
        if(x[i] == 'C')
            C++;
        if(x[i] == 'D')
            D++;
        if(x[i] == 'E')
            E++;
        if(x[i] == 'F')
            F++;
        if(x[i] == 'G')
            G++;
        if(x[i] == 'H')
            H++;
    }
    printf("%d %d %d %d %d %d %d %d", A, B, C, D, E, F, G, H);
    return 0;
}
