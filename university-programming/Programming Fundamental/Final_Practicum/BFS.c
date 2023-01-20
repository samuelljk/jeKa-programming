#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef unsigned int ui;
const int BIT_SIZE = 32;

void bitflipright(int num, int bit[]) {
    if (num > 0) {
        int loc = BIT_SIZE - num;
        bit[loc] ^= 1;
    }
}

void binary(ui num, int bit[])
{
    int loc = 0;
	for(ui i=2147483648; i>0; i=i/2) {
		if(num & i) 
			bit[loc] = 1;
		else
			bit[loc] = 0;
		loc++;
	}
}

int count(int bit1[], int bit2[]) {
    int flip = 0;
    int operations = 0;
    for (int i=0; i<BIT_SIZE; i++) {
        if (bit1[i] != bit2[i]) {
            if (flip == 0) {
                operations++;
                flip = 1;
            } 
        } else {
            flip = 0;
        }
    }
    return operations;
}

int main ()
{
    int ii[BIT_SIZE], jj[BIT_SIZE];
    int n, m;
    scanf("%d %d", &n, &m);
    int It[n], Bt[n];
    for (int j=0; j<n; j++) {
        scanf("%d %d", &It[j], &Bt[j]);
    }
    for (int i=0; i<n; i++) {
        binary(m, ii);
        bitflipright(It[i], ii);
        binary(Bt[i], jj);
        printf("%d\n", count(ii, jj));
        m = Bt[i];
    }
}