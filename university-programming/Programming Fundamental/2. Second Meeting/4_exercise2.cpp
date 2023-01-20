#include <bits/stdc++.h>

using namespace std;

string listAngka[10] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
string result, result1;
int main(){
	int a, b, c, d, e, x, y, z;
	scanf("%d", &a);
	while (a!=0){
		b = a%10;
		if (b > 0){
			result = listAngka[b];
			a -= b;
			a /= 10;
		}
		else if (b == 0){
			x++;
			a /= 10;
		}
		c = a%10;
		if (c > 0){
			if (c == 1){
				if (listAngka[b]=="satu"){
					result = "sebelas"; 
					a -= c;
					a /= 10;
				}
				else if (listAngka[b]=="nol"){
					result = "sepuluh"; 
					a -= c;
					a /= 10;
				}
				else{
				result = listAngka[b] + " belas"; 
				a -= c;
				a /= 10;
				}
			}
			else if (c > 1){
				if (listAngka[c]=="satu"){
					result = "sepuluh ";
					a -= c;
					a /= 10;
				}
				else{
					result1 = result;
					result = listAngka[c] + " puluh " + result1;
					a -= c;
					a /= 10;
				}
			}
		}
		else if (c == 0){
			y++;
			a /= 10;
		}
		d = a%10;
		if (d > 0){
			if (listAngka[d]=="satu"){
				result1 = result;
				result = "seratus " + result1;
				a -= d;
				a /= 10;
			}
			else{
				result1 = result;
				result = listAngka[d] + " ratus " + result1;
				a -= d;
				a /= 10;
			}
		}
		else if (d == 0){
			z++;
			a /= 10;
		}
		e = a%10;
		if (e > 0){
			if (listAngka[e]=="satu"){
				result1 = result;
				result = "seribu " + result1;
				a -= e;
				a /= 10;
			}
			else{
				result1 = result;
				result = listAngka[e] + " ribu " + result1;
				a -= e;
				a /= 10;
			}
		}
		else if (e == 0){
			z++;
			a /= 10;
		}
	}
	cout << result;
//	printf("%s", result);
}