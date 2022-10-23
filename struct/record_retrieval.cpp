#include<bits/stdc++.h>
using namespace std;
struct student{
    char id[10];
    char name[32];
    char last[52];
    int year;
};
int main(){
    int n;
    cin >> n;
    student s[n];
    int i;
    for(i = 0; i < n; i++){
        cin >> s[i].id;
        cin >> s[i].name;
        cin >> s[i].last;
        cin >> s[i].year;
    }
    int choose;
    cin >> choose;
    int pass = 0;
    for(i = 0; i < n; i++){
        if(s[i].year == choose){
            cout << s[i].id << " " << s[i].name << " " << s[i].last << endl;
            pass = 1;
        }
    }
    if(pass == 0)
        cout << "None";
    return 0;
}
