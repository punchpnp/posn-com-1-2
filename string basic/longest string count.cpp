#include<bits/stdc++.h>
using namespace std;
char str[100];
char maxstr[100];
char str2[100];

int main(){

    gets(str);
    int len = strlen(str);
    int max = len;
    strcpy(maxstr, str);
    int i;
    int c = 1;

    for(i = 0; ;i++){
        gets(str2);
        int len2 = strlen(str2);
        if(len2 == 0)
            break;
        if(len2 == max){
            c++;
        }
        else if(len2 > max){
            c = 0;
            max = len2;
            c++;
        }
    }
    cout << max << endl;
    cout << c;
    return 0;
}
