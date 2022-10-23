#include<cstdio>
int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int array[3] = {A, B, C};
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(i = 0; i < 3; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
