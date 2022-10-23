#include<cstdio>
int main(){
    int id1, id2, id3;
    int t1, t2, t3;
    int v1, v2, v3;
    scanf("%d %d %d", &id1, &t1, &v1);
    scanf("%d %d %d", &id2, &t2, &v2);
    scanf("%d %d %d", &id3, &t3, &v3);
    int n, k;
    scanf("%d %d", &n, &k);
    int x[n], price[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d %d", &x[i], &price[i]);
    }
    int sumAll = 0;
    int sumOther = 0;
    int stamp1 = 0;
    for(i = 0; i < n; i++){
        if(x[i] == id1){
            if(t1 == 1){
                sumAll = sumAll + price[i];
                stamp1 = stamp1 + v1;
            }
            else // t1 == 2
                sumAll = sumAll + price[i] - v1;
        }
        else if(x[i] == id2){
            if(t2 == 1){
                sumAll = sumAll + price[i];
                stamp1 = stamp1 + v2;
            }
            else // t2 == 2
                sumAll = sumAll + price[i] - v2;
        }

        else if(x[i] == id3){
            if(t3 == 1){
                sumAll = sumAll + price[i];
                stamp1 = stamp1 + v3;
            }
            else // t3 == 2
                sumAll = sumAll + price[i] - v3;
        }

        else{
            sumAll = sumAll + price[i];
            sumOther = sumOther + price[i];
        }
    }
    int stamp2 = sumOther / k;
    printf("%d\n", sumAll);
    printf("%d\n", sumOther);
    printf("%d", stamp2 + stamp1);
    return 0;
}
