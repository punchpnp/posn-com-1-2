#include<cstdio>
int main(){
    int ID1, ID2, ID3;
    int st1, st2, st3;
    scanf("%d %d", &ID1, &st1);
    scanf("%d %d", &ID2, &st2);
    scanf("%d %d", &ID3, &st3);

    int N, K;
    scanf("%d %d", &N, &K);

    int ID[N], price[N];
    int i;
    int sumAll = 0;
    int sumCon2 = 0;
    int stamp1 = 0;

    for(i = 0; i < N; i++){
        scanf("%d", &ID[i]);
        scanf("%d", &price[i]);
        sumAll = sumAll + price[i];
        if(ID[i] != ID1 && ID[i] != ID2 && ID[i] != ID3)
            sumCon2 = sumCon2 + price[i];
        else if(ID[i] == ID1)
            stamp1 = stamp1 + st1;
        else if(ID[i] == ID2)
            stamp1 = stamp1 + st2;
        else if(ID[i] == ID3)
            stamp1 = stamp1 + st3;
    }

    int stamp2 = sumCon2 / K;
    printf("%d\n", sumAll);
    printf("%d\n", sumCon2);
    printf("%d", stamp1 + stamp2);
    return 0;
}
