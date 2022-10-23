#include<cstdio>
int main(){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	int min = x;
	if(y < min)
		min = y;
	if(z < min)
		min = z;
	if(min == x){
		int ansx = x / 3;
		printf("%d ", ansx);
		printf("%d ", x % 3 );
		printf("%d ", y - ( ansx * 4 ) );
		printf("%d", z - ( ansx * 2 ) );
	}
		
	else if(min == y){
		int ansy = y / 4;
		printf("%d ", ansy);
		printf("%d ", x - ( ansy * 3 ) );
		printf("%d ", y % 4);
		printf("%d", z - ( ansy * 2 ) );
	}
		
	else if(min == z){
		int ansz = z / 2;
		printf("%d ", ansz);
		printf("%d ", x - ( ansz * 3 ) );
		printf("%d ", y - ( ansz * 4 ) );
		printf("%d", z % 2);
	}
			
	return 0;
}
