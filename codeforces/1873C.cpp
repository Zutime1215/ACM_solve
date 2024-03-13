#include <bits/stdc++.h>
using namespace std;

int target(int p,int q) {
	if ( p==0 || p==9 || q==0 || q==9 ) {return 1;}
	else if ( p==1 || p==8 || q==1 || q==8 ) {return 2;}
	else if ( p==2 || p==7 || q==2 || q==7 ) {return 3;}
	else if ( p==3 || p==6 || q==3 || q==6 ) {return 4;}
	else if ( p==4 || p==5 || q==4 || q==5 ) {return 5;}
	else {return 0;}
}

int main() {
	int t, x=0;
	char in[10][10];
	cin >> t;
	while(t--){

		for (int i=0;i<10;i++){
			for (int j=0;j<10;j++){
				cin >> in[i][j];
			}
		}

		for (int i=0;i<10;i++){
			for (int j=0;j<10;j++){
				if ( in[i][j] == 'X' ) {
					x = x + target(j,i);
				};
			}
		}
		cout << x << endl;
		x = 0;
	}
	
}