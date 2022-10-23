#include<cstdio>
int main(){
    int i, j;
    int c = 0;
    int check = 0;
    int array[10000];
    for(i = 3; i < 9092; i++){
        for(j = 2; j < i; j++){
            if(check == 0){
                array[c] = 2;
                check = 1;
                c++;
            }
            if(i % j == 0)
                break;
            else if(j == i - 1){
                array[c] = i;
                c++;
            }
        }
    }
    // check all prime
    //for(i = 0; i < c; i++){
    //    printf("%d ", array[i]);
    //}
     //check prime * prime
    int ans[c];
    int x = 0;
    for(i = 0; i < c; i++){
        for(j = 1; j < c; j++){
            ans[x] = array[i] * array[j];
            printf("%d ", array[i] * array[j]);
            x++;
            if(ans[x] > 100001)
                break;
        }
        if(ans[x] > 100001)
                break;
    }
    for(i = 0; i < x; i++){
        printf("%d ", ans[i]);
    }

    return 0;
}
