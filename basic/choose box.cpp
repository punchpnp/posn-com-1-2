#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    // sort
    if(y > x)
        swap(x,y);
    if(z > x)
        swap(x,z);
    if(z > y)
        swap(y,z);

    // check box1
    if(15 >= x && 10 >= y && 8 >= z){
        cout << "1" << endl;
        int ans_1 = (10*15*8) - (x*y*z);
        cout << ans_1;
    }
    else if(25 >= x && 15 >= y && 12 >= z){
        cout << "2" << endl;
        int ans_2 = (25*15*12) - (x*y*z);
        cout << ans_2;
    }
    else if(50 >= x && 40 >= y && 20 >= z){
        cout << "3" << endl;
        int ans_3 = (40*50*20) - (x*y*z);
        cout << ans_3;
    }
    else{
        cout << "Oversize product" << endl;
        int ans_4 = (x*y*z) - (40*50*20);
        cout << ans_4;
    }
    return 0;
}
