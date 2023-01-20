#include <bits/stdc++.h>

using namespace std;

int main(){
	float a;
	int b;
	cin >> a;
	b = trunc(a);
	if (a==b){
		cout<<b<<" "<<b<<endl;
	}
	else if (a>0){
		cout<<b<<" "<<b+1<<endl;
	}
	else{
		cout<<b-1<<" "<<b<<endl;
	}
	
	return 0;
}