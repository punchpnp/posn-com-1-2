#include<cstdio>
int main ()
{
    int count = 1;
    int max = 0;
    int x = 100000;
    int key;
    int num[x];
    int ans;
    for(int i = 1; i < x; i++){
        scanf("%d", &num[i]);
        if(num[i] == 0){
            x = i+1;
            break;
        }
    }
    for(int i = 0; i < x-1; i++){
        if(num[i] == num[i+1]){
            count++;
            if(count > max){
                max = count;
                key = 1;
            }
        }
        else{
            if(max == count && key == 1){
                ans = num[i];
                key = 0;
            }
            count = 1;
            if(count > max){
                max = count;
                key = 1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d", ans);

    return 0;
}
