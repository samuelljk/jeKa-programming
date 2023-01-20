#include <iostream>
#include <string>

using namespace std;

int a, b, c, d, e, f;
float a1, b1, c1, d1, e1, f1, res;
int main(){
	cin>>a>>b>>c>>d>>e>>f;
	a1 = (float)a;
	b1 = (float)b;
	c1 = (float)c;
	d1 = (float)d;
	e1 = (float)e;
	f1 = (float)f;
	res = (a1+b1+c1+d1+e1+f1)/6;
	cout<<res;
}