#include <iostream>
#include <string>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if (a>=1 && b>=1 && a<=4000000000000000000 && b<=4000000000000000000){
		cout << a+b;
	}
}