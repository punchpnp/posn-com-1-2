#include<bits/stdc++.h>
int main(){
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    int i;
    for(i = 0; i < n; i++){
    	scanf("%d", &x[i]);
	}
	for(i = 0; i < n; i++){
    	scanf("%d", &y[i]);
	}
	for(i = 0; i < n; i++){
    	if(x[i] > y[i])
    		printf("%d ", x[i]*10+y[i]);
    	else
    		printf("%d ", y[i]*10+x[i]);
	}
    return 0;
}
