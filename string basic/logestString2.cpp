#include<cstdio>
#include<cstring>
int main(){
    char a[10000];
    char b[10000];
    char sentence[10000];
    int i, j;

    scanf("%[^\n]", a); // first input
    int len1 = strlen(a);
    int max = len1;
    for(j = 0; j < max; j++){
        sentence[j] = a[j];
    }

    for(i = 0; i < 4; i++){ // 2-4 input
        scanf(" %[^\n]", b);
        int len2 = strlen(b);
        if(len2 > max){
            max = len2;
            for(j = 0; j < max; j++){
                sentence[j] = b[j];
            }
        }
    }

    for(j = 0; j < max; j++){
        printf("%c", sentence[j]);
    }
    return 0;
}
