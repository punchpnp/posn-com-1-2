#include<cstdio>
int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    if(z == 0)
        printf("cannot divide by zero");
    else
        printf("%f", (x+y)/z);
    return 0;
}
