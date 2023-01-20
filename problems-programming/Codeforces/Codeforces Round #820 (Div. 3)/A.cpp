#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d;
	cin >> a;
	for (int i=0; i<a; i++){
		cin >> b >> c >> d;
		if (1<=b && b<=100000000 && 1<=c && c<=100000000 && 1<=d && d<=100000000 && c != d){
			if (b==1 || (b<c && b<d)){
				cout << 1 << endl;
			}
			else if (c==1 && 1-(d-(c+1))==(b-1)-1){
				cout << 3 << endl;
			}
			else if (b-1 > c-b-1){
				cout << 2 << endl;
			}
			else if (1-(d-(c+1))==(b-1)-1){
				cout << 3 << endl;
			}
		}
	}
}