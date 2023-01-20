#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d, res;
	cin >> a;
	for (int i=0; i<a; i++){
		cin >> b >> c >> d;
		res = ((2*b) + (2*c))*d;
		cout << res << endl;
	}
}