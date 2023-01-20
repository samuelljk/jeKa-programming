#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, res = 4, beda;
	scanf("%d", &a);
	if (a == 2){
		res *= 1;
	}
	else if (a == 3){
		res += 2;
	}
	else if (a > 3){
		beda = 7;
		res = 13;
		while (a > 3){
			if (a == 4){
				res = 6;
				res += beda;
				a--;
			}
			else if (a > 4){
				beda += 4;
				res += beda;
				a--;
				if (a==4){
					break;
				}
			}
		}
	}
	printf("%d\nBdiqz tidak ganz!", res);
}