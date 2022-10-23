#include<bits/stdc++.h>
using namespace std;
struct student{
	char id[100];
	char name[100];
	char last[100];
	float grade;
};
int main(){

	int n;
	cin >> n;
	student s[n]; // struct

	int i;
	int lenID, lenN, lenL;
	float max = INT_MIN;
	float newG;
	char newID[100], newN[100], newL[100];

	for(i = 0; i < n; i++){
		cin >> s[i].id;
		cin >> s[i].name;
		cin >> s[i].last;
		cin >> s[i].grade;

		if(s[i].grade > max){
			max = s[i].grade;
			strcpy(newID, s[i].id);
			strcpy(newN, s[i].name);
			strcpy(newL, s[i].last);
			newG = s[i].grade;
		}
	}

	cout << newID << " " << newN << " " << newL << " " ;
	cout << fixed << setprecision(2) << newG;

	return 0;
}
