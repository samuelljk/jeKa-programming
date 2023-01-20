//#include <stdio.h>
//int main(){
//	printf("%d\n", 1+2);	// +
//	printf("%d\n", 4-1);	// -
//	printf("%d\n", 3*4);	// x
//	printf("%d\n", 6/3);	// (pembagian)
//	printf("%d\n", 10%3);	// Modulus (sisa pembagian)
//	
//	// AND '&'
//	// OR '|'
//	// XOR (exclusive or) '^'
//	// Shift Right '>>' (cnth: 6>>2 atau 110[binary 6] >> 2 = 001) ATAU dibagi
//	// Shift Left '<<' (kebalikan Shift Right) ATAU dikali
//	
//	printf("Ini tambah : %d\n", 2+3);
//	printf("Ini kurang : %d\n", 3-2);
//	printf("Ini kali : %d\n", 3*3);
//	printf("Ini bagi : %d\n", 5/2);
//	printf("Ini bagi (desimal) : %f\n", 5.0/2.0);
//	printf("Arithmetic : (%d+%d)/%d = %d\n", 5, 2, 3, (5+2)/3);
//	
//	printf("AND : %d\n", 6&5);
//	printf("OR : %d\n", 6|5);
//	printf("XOR : %d\n", 6^5);
//	printf("Shift Right : %d\n", 6>>2);
//	printf("Shift Left : %d\n", 6<<2);
//	
//	//Pre-Increment
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	//Post-Increment
//	int b = 0;
//	printf("%d\n", b++);
//	printf("%d\n", b);
//	//Pre-Decrement
//	int c = 0;
//	printf("%d\n", --c);
//	printf("%d\n", c);
//	//Post-Decrement
//	int d = 0;
//	printf("%d\n", d--);
//	printf("%d\n", d);
//	
//	return 0;
//}
//
//#include <stdio.h>
//int main(){
//	printf("%d\n", 10&3);
//	// 1010 & 11 = 0010 atau 10 = 2 (INGAT 0 SALAH, 1 BENAR)
//	printf("%d\n", 20|30);
//	// 20 OR 30 = 10100 | 11110 = 11110 = 30
//	printf("%d\n", 5^2);
//	// 5^2 = 101 ^ 10 = 111 = 7
//	printf("%d\n", 5>>4);
//	// 3>>4 = 011 = 0,0011 = 0
//	printf("%d\n", 6<<5);
//	// 6<<5 = 11000000 = 192 atau 6*(2^5)
//	
//	return 0;
//	
//}


#include <stdio.h>
int main(){
	int a1;
	int a2;
	// bisa juga "int a1, a2;"
	
	scanf("%d %d", &a1, &a2); // kenapa cuma a1 dan a2? agar menghemat memori dan terus berganti setiap scanf
	printf("%d\n", a1+a2);
	scanf("%d %d", &a1, &a2);
	printf("%d\n", a1-a2);
	scanf("%d %d", &a1, &a2);
	printf("%d\n", a1*a2);
	scanf("%d %d", &a1, &a2);
	printf("%d\n", a1/a2);
	scanf("%d %d", &a1, &a2);
	printf("%d\n", a1%a2);
	return 0;
	
}
