#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d ", &n);
    char str[10005];
    char ans[10005];
    int i, j;
    int min = INT_MAX;
    int max = INT_MIN;
    int temp;
    if(n == 1){
        for(i = 0; ; i++){
            gets(str);
            int len = strlen(str);
            if(len == 0){
                cout << temp << endl;
                cout << ans;
                break;
            }
            else if(len >= max){
                max = len;
                strcpy(ans,str);
                temp = len;
            }
        }
    }
    else{
        for(i = 0; ; i++){
            gets(str);
            int len = strlen(str);
            if(len == 0){
                cout << temp << endl;
                cout << ans;
                break;
            }
            else if(len <= min){
                min = len;
                strcpy(ans,str);
                temp = len;
            }
        }
    }



    return 0;
}
