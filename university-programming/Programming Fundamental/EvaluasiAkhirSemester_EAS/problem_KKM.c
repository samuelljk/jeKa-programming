//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| X | 0 | X | ~~ Name: Samuel Josefano Kaloh			 ~~ | 0 | X | 0 |
//	 --- --- ---  ~~ NRP: 5025221065						 ~~  --- --- ---
//	| 0 | X | 0 | ~~ Event: Fundamental Programming (ETS)	 ~~ | X | 0 | X |
//	 --- --- ---  ~~ Date & Time: Wednesday, 7 December 2022 ~~  --- --- ---
//	| X | 0 | X | ~~ Problem: prob_KKM  					 ~~ | 0 | X | 0 |
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

char getPat(int mode, int row, int col){
	char pattern[row*2][col*2];
	if (mode==1){
		int fib_loc = 1;
		for (int i=0; i<row; i++){
			for (int j=0; j<col; j++){
		    	if (j==fib_loc){
		    		strcpy(pattern[j], "   ");
				}
				else{
					strcpy(pattern[j], "*");
				}
			}
			fib_loc++;
		}
		return pattern;
	}
	else if (mode==2){
		int fib_loc = 1;
	    for (int i=0; i<row; i++){
	    	for (int j=0; j<col; j++){
	    		char temp[101];
				if (j==fib_loc){
	    			sprintf(temp, " %d ", fib(i+1));
					strcpy(pattern[j], temp);
				}
				else{
					strcpy(pattern[j], "*");
				}
			}
			fib_loc++;
		}
		return pattern;
	}
	else if (mode==3){
		int fib_loc = 1;
		char pattern[row][col];
	    for (int i=0; i<row; i++){
	    	for (int j=0; j<col; j++){
	    		char temp[101];
				if (j==fib_loc){
	    			sprintf(temp, " %d ", fib(i+1));
					strcpy(pattern[j], temp);
				}
				else{
					strcpy(pattern[j], "*");
				}
			}
			fib_loc++;
		}
		return pattern;
	}
}
void print_array(int row,int col,char A[row][col])
{
    for (int j=0; j<row; j++){
    	printf("%s", A[j]);
	}
}

int main(){
	int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        int row, col, mode;
        scanf(" %d %d %d", &mode, &row, &col);
        char matrix[row*2][col*2];
        matrix = getPat(mode, row, col);
        print_array(row, col, matrix);
	}
}