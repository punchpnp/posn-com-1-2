#include<cstdio>
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    int M, N;
    scanf("%d %d", &M, &N);

    int a = 6*A;
    int b = 10*B;
    int ans1, ans2;
 	if(a > 0)
    	ans1 = (M+a-1)/a;
    if(b > 0)
    	ans2 = (N+b-1)/b;
    else if(a == 0)
    	ans1 = 0;
    else if(b == 0)
    	ans2 = 0;

    if( (A == 0 && M > 0) || (B == 0 && N > 0) )
        printf("Unable to finish order");

    else{
        if(ans1 > ans2)
            printf("%d", ans1);
        else
            printf("%d", ans2);
    }

    return 0;
}
