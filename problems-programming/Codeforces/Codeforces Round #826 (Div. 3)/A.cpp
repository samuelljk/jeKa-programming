#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y;
	char a[50], b[50];
//	scanf("%d", &n);
	cin >> n;
	for (int i=0; i<n; i++){
		int 
		countSx=0, countSy=0, 
		countMx=0, countMy=0,
		countLx=0, countLy=0,
		countXx=0, countXy=0,
		restx=0, resty=0;
//		if (i==n-1){
//            scanf("%c %c", &a, &b);
//        }else{
//            scanf("%c %c", &a, &b);
//            scanf("\n");
//        }
		cin >> a >> b;
		x = strlen(a);
		y = strlen(b);
		for (int i=0; i<x; i++){
			if (a[i] == 'S'){
				countSx++;
			}
			else if (a[i] == 'M'){
				countMx++;
			}
			else if (a[i] == 'L'){
				countLx++;
			}
			else if (a[i] == 'X'){
				countXx++;
			}
			else{
				restx++;
			}
		}
		for (int i=0; i<y; i++){
			if (b[i] == 'S'){
				countSy++;
			}
			else if (b[i] == 'M'){
				countMy++;
			}
			else if (b[i] == 'L'){
				countLy++;
			}
			else if (b[i] == 'X'){
				countXy++;
			}
			else{
				resty++;
			}
		}
		if (countSx<=1 && countMx<=1 && countLx<=1 && countSy<=1 && countMy<=1 && countLy<=1 && restx==0 && resty==0){
			if (a[x-1]=='S' && b[0]=='M'){
				cout << "<" << endl;
			}else if (a[0]=='M' && b[y-1]=='L'){
				cout << "<" << endl;
			}else if (a[x-1]=='S' && b[y-1]=='L'){
				cout << "<" << endl;
			}else if (a[0]=='M' && b[y-1]=='S'){
				cout << ">" << endl;
			}else if (a[x-1]=='L' && b[0]=='M'){
				cout << ">" << endl;
			}else if (a[x-1]=='L' && b[y-1]=='S'){
				cout << ">" << endl;
			}else if (a[0]=='M' && b[0]=='M'){
				cout << "=" << endl;
			}else if (a[x-1]==b[y-1]){
				if (a[x-1]=='S'){
					if (strlen(a)>strlen(b)){
						cout << "<" << endl;
					}else if (strlen(a)<strlen(b)){
						cout << ">" << endl;
					}else{
						cout << "=" << endl;
					}
				}else if (a[x-1]=='L'){
					if (strlen(a)>strlen(b)){
						cout << ">" << endl;
					}else if (strlen(a)<strlen(b)){
						cout << "<" << endl;
					}else{
						cout << "=" << endl;
					}
				}
			}
		}
	}
}