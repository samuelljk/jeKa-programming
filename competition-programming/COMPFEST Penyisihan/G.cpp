#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, res, res1, res2;
	cin >> a;
	res1 = 3;
	res2 = 5;
	if (a==1){
		cout << res1;
	}
	else if (a==2){
		cout << res2;
	}
	else if (a>2 && a%3==0){
		b = a/3;
		res = res1 + (4*b);
		cout << res;
	}
	else if (a>2 && a%3!=0){
		res = res1 + (4*(a/3)) + (a-((a/3)*3));
		cout << res; 
	}
}