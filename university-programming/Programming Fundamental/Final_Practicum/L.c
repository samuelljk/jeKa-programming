#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char koordinat[1001][1001];
int size=0, longest=0;
int x, y;

void path(int n, int m)
{
    koordinat[n][m]='+';
    size++;
    int id=0;
    static int baris[] = { -1, 0, 0, 1};
    static int kolom[] = { 0, -1, 1, 0};
    for (int k = 0; k < 4; k++)
    {
        if(koordinat[n+baris[k]][m+kolom[k]]=='.')
        {
            path(n+baris[k], m+kolom[k]);
            id=1;
        }
    }
    koordinat[n][m]='.';
    size--;
    if (size>=longest){
        longest=size;
        if (id==0){
        	y=m;
        	x=n;
		}
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for(int k=0;k<T;k++){
        int a, b;
        scanf("%d %d",&a, &b);
        for (int i = 0; i<b ; i++){
            scanf("%s", koordinat[i]);
        }
        for(int i = 0; i < b; i++){
            for(int j=0;j<a;j++){
                if(koordinat[i][j]=='.'){
                path(i, j);
                break;
                }
            }
        }
        size=0;
        longest=0;
        path(x, y);
        printf("Panjang tali adalah %d.\n", longest);
        fflush(stdout);
        longest=0;
    }
}