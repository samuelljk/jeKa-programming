#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d, e;
	float b1, c1, d1, e1, pers1, pers2;
	cin >> a;
	for (int i=0; i<a; i++){
		cin >> b >> c >> d >> e;
		b1 = (float)b;
		c1 = (float)c;
		d1 = (float)d;
		e1 = (float)e;
		pers1 = b1/c1;
		pers2 = d1/e1;
		if (pers2 > pers1){
			cout << "Bob" << endl;
		}
		else if (pers1 == pers2){
			cout << "Equal" << endl;
		}
		else{
			cout << "Alice" << endl;
		}
	}
	
}