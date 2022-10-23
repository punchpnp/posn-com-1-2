#include<stdio.h>
#include<string.h>
int main(){
    char x[1000000] = {};
    scanf("%[^\n]", &x);
    int n;
    scanf("%d", &n);
    int len = strlen(x);
    
	//printf("%d\n", len);
	
	if(n > 0 && n < len){
		char y = x[n-1];
		printf("%c", y);	
	}
	else
       	printf("invalid position");	
 
    return 0;
}
