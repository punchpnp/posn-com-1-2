#include<cstdio>
#include<cstring>
int main(){
    char x;
    scanf("%c", &x);
    if(x >= 'A' && x <= 'Z')
        printf("%c", x + 32);
    else if(x >= 'a' && x <= 'z')
        printf("%c", x - 32);
    else
        printf("%c", x);

    return 0;
}
