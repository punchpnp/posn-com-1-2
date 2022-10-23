#include<stdio.h>
int main(){
  	int n;
  	scanf("%d", &n);
  	int x[10000];
  	int i;
  	int count = 0;
  	int countAgain = 1;
  	int check = 0;
  	int max;
  	for(i = 0; ; i++){
  		scanf("%d", &x[i]);
  		if(x[i] == 0)
  			break;
  		if(x[i] == n){
  			count++;	
  			if(x[i] == x[i+1]){
  				countAgain++;
  				if(check == 0){
  					max = countAgain;
					check = 1;	
				}
				else if(countAgain > max){
					max = countAgain;
				}
			}
			else
				countAgain = 1;	
		}
	}
	printf("%d\n", max);
	printf("%d", count);
    return 0;
}
