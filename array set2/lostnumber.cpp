#include<cstdio>
int main(){
    int m;
    scanf("%d", &m);
    int i, j;
    int x[m];
    for(i = 0; i < m; i++){
        scanf("%d", &x[i]);
    }
    int n;
    scanf("%d", &n);

    int y[n];
    for(i = 0; i < n; i++){
        scanf("%d", &y[i]);
    }
    int donthave[n];
    int c = 0;
    int pass = 0;
    for(i = 0; i < n; i++){ // y[j]
        for(j = 0; j < m; j++){  // x[i]
            if(y[i] == x[j])
                break;
            else if(m - j == 1){
                donthave[c] = y[i];
                c++;
            }
        }
    }

    for(i = 0; i < c; i++){
       printf("%d ", donthave[i]);
    }
    return 0;
}
