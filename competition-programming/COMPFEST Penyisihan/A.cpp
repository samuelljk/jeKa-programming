#include <bits/stdc++.h>

using namespace std;

int main(){
	long long a, b, res;
	cin >> a >> b;
	if (b==1){
		res = (a-1);
	}
	else if (a==1){
		res = (b-1);
	}
	else if (b>1){
		res = (b-1)*a;
	}
	else{
		res = 0;
	}
		cout << res;
}