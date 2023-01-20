#include <bits/stdc++.h>

using namespace std;

int main(){
	char words[100];
	cin >> words;
	int count = -1;
	for (int i=0; i<strlen(words); i++){
		if (words[i]=='a'){
			count = i+1;
		}
	}
	cout << count;
}