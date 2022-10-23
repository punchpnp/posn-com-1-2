#include<cstdio>
int key[401][401] = {};
int price[401][401];
int main(){
    int R, C;
    scanf("%d %d", &R, &C);
    int n;
    scanf("%d", &n);

    int i, j, c;
    int pass = 0;

    int x, y;
    int h, w;

    for(c = 1; c <= n; c++){
        scanf("%d %d", &x, &y);
        scanf("%d %d", &h, &w);
        // check
        if(x <= 0 || x > R || y <= 0 || y > C)
            continue;
        else if(x+h-1 > R || y+w-1 > C)
            continue;

        else{
            // have before
            for(i = x; i < x+h; i++){
                if(pass == 1)
                    break;
                for(j = y; j < y+w; j++){
                    if(key[i][j] == 1){
                        pass = 1;
                        break;
                    }
                }
            }
            if(pass == 1){
                pass = 0;
                continue;
            }

            // pass
            for(i = x; i < x+h; i++){
                for(j = y; j < y+w; j++){
                    key[i][j] = 1;
                }
            }
        }
    }

    // last input
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            scanf("%d", &price[i][j]);
        }
    }

    int sum = 0;
    for(i = 1; i <= R; i++){
        for(j = 1; j <= C; j++){
            if(key[i][j] == 1)
                sum = sum + price[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}
