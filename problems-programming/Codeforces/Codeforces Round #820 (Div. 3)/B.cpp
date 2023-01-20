#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, sem;
	char alph[100] = "abcdefghijklmnopqrstuvwxyz";
	string res = "";
	cin >> a;
	for (int i=0; i<a; i++){
		cin >> b;
		cin >> c;
		while (c > 0){
			if (c%10!=0){
				sem = c%10;
				res += alph[sem-1];
				c -= sem;
			}
			else if (c%10==0){
				sem = c%1000;
				res += alph[sem-1];
				c -= sem;
			}
		}
		cout << res << endl;
	}
}