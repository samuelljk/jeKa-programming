//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| X | 0 | X | ~~ Name: Samuel Josefano Kaloh			 ~~ | 0 | X | 0 |
//	 --- --- ---  ~~ NRP: 5025221065						 ~~  --- --- ---
//	| 0 | X | 0 | ~~ Event: Fundamental Programming (ETS)	 ~~ | X | 0 | X |
//	 --- --- ---  ~~ Date & Time: Wednesday, 7 December 2022 ~~  --- --- ---
//	| X | 0 | X | ~~ Problem: prob_ACCuy					 ~~ | 0 | X | 0 |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main(){
	int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        int row, col;
        scanf(" %d %d", &row, &col);
    	int fib_loc = 1;
	    for (int i=0; i<row; i++){
	    	for (int j=0; j<col; j++){
	    		if (j==fib_loc){
	    			printf(" %d ", fib(i+1));
				}
				else{
					printf("*");
				}
			}
			fib_loc++;
			printf("\n");
		}
		printf("\n");
	}
}