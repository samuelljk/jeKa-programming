#include <stdio.h>

int main(){
	int a, b, c, d, e, f, a1, b1, c1, d1, e1, temp = 0, temp2 = 0, temp3 = 0, indx, indx2, indx3;
	scanf("%d", &a);
	a1 = 1;
	if (temp<a){
		temp = a;
		indx = a1;
	}
	scanf("%d", &b);
	b1 = 2;
	if (temp<b){
		temp2 = temp;
		indx2 = indx;
		temp = b;
		indx = b1;
	}
	else if (temp2<b){
		temp3 = temp2;
		indx3 = indx2;
		temp2 = b;
		indx2 = b1;
	}
	else if (b==temp){
		if (indx>b1){
			temp2 = temp;
			indx2 = indx;
			temp = b;
			indx = b1;
		}
	}
	else if (b==temp2){
		if (indx2>b1){
			temp3 = temp2;
			indx3 = indx2;
			temp2 = b;
			indx2 = b1;
		}
	}
	else{
		temp2 = b;
	}
	scanf("%d", &c);
	c1 = 3;
	if (temp<c){
		temp3 = temp2;
		indx3 = indx2;
		temp2 = temp;
		indx2 = indx;
		temp = c;
		indx = c1;
	}
	else if (temp2<c){
		temp3 = temp2;
		indx3 = indx2;
		temp2 = c;
		indx2 = c1;
	}
	else if (temp3<c){
		temp3 = c;
		indx3 = c1;
	}
	else if (c==temp){
		if (c1<indx){
			temp2 = temp;
			indx2 = indx;
			temp = c;
			indx = c1;
		}
		else if (c1<indx2){
			temp3 = temp2;
			indx3 = indx2;
			temp2 = c;
			indx = c1;
		}
	}
	else if (c==temp2){
		if (indx2>c1){
			temp3 = temp2;
			indx3 = indx2;
			temp2 = c;
			indx2 = c1;
		}
		else{
			temp3 = c;
			indx3 = c1;
		}
	}
	else if (c==temp3){
		if (indx3>c1){
			temp3 = c;
			indx3 = c1;	
		}
	}
	scanf("%d", &d);
	d1 = 4;
	if (temp<d){
		temp3 = temp2;
		indx3 = indx2;
		temp2 = temp;
		indx2 = indx;
		temp = d;
		indx = d1;
	}
	else if (temp2<d){
		temp3 = temp2;
		indx3 = indx2;
		temp2 = d;
		indx2 = d1;
	}
	else if (temp3<d){
		temp3 = d;
		indx3 = d1;
	}
	else if (d==temp){
		if (indx>d1){
			temp2 = temp;
			indx2 = indx;
			temp = d;
			indx = d1;
		}
		else {
			temp3 = temp2;
			indx3 = indx2;
			temp2 = d;
			indx2 = d1;
		}
	}
	else if (d==temp2){
		if (indx2>d1){
			temp3 = temp2;
			indx3 = indx2;
			temp2 = d;
			indx2 = d1;
		}
		else{
			temp3 = d;
			indx3 = d1;
		}
	}
	else if (d==temp3){
		if (indx3>d1){
			temp3 = d;
			indx3 = d1;	
		}
	}
	scanf("%d", &e);
	e1 = 5;
	if (temp<e){
		temp3 = temp2;
		indx3 = indx2;
		temp2 = temp;
		indx2 = indx;
		temp = e;
		indx = e1;
	}
	else if (temp2<e){
		temp3 = temp2;
		indx3 = indx2;
		temp2 = e;
		indx2 = e1;
	}
	else if (temp3<e){
		temp3 = e;
		indx3 = e1;
	}
	else if (d==temp){
		if (indx>e1){
			temp2 = temp;
			indx2 = indx;
			temp = e;
			indx = e1;
		}
		else {
			temp3 = temp2;
			indx3 = indx2;
			temp2 = e;
			indx2 = e1;
		}
	}
	else if (e==temp2){
		if (indx2>e1){
			temp3 = temp2;
			indx3 = indx2;
			temp2 = e;
			indx2 = e1;
		}
		else{
			temp3 = e;
			indx3 = e1;
		}
	}
	else if (e==temp3){
		if (indx3>e1){
			temp3 = e;
			indx3 = e1;	
		}
	}
	printf("%d %d\n", indx, temp);
	printf("%d %d\n", indx2, temp2);
	printf("%d %d\n", indx3, temp3);
}	