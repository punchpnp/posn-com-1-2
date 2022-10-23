#include<bits/stdc++.h>
int main(){
	char str1[1000];
	//gets(str1);     can't use because it can input " "
	scanf("%s", str1);
	int len = strlen(str1);
	//printf("%d\n", len);
	int i; 
	int count = 0;
	
	for(i = 0; i < len/2; i++){
    //	printf("%c\n", str1[i]);
    //	printf("%c\n", str1[len-1-i]);
		if(str1[i] == str1[len-1-i])
       	   count++;
   	}
	
	if(count == len/2)
        printf("true");
    else
        printf("false");
	return 0;
}
