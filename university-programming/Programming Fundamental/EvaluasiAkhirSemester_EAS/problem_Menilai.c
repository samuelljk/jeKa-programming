//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| X | 0 | X | ~~ Name: Samuel Josefano Kaloh			 ~~ | 0 | X | 0 |
//	 --- --- ---  ~~ NRP: 5025221065						 ~~  --- --- ---
//	| 0 | X | 0 | ~~ Event: Fundamental Programming (ETS)	 ~~ | X | 0 | X |
//	 --- --- ---  ~~ Date & Time: Wednesday, 7 December 2022 ~~  --- --- ---
//	| X | 0 | X | ~~ Problem: prob_Menilai					 ~~ | 0 | X | 0 |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
//	| 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X | 0 | X |
//	 --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct data{
    char name[11];
    int move[10];
};

int main(){
    struct data dt[4];
    for (int i=0; i<4; i++){
    	if (i==0){
    		scanf("%s", dt[i].name);
		}else{
			scanf(" %s", dt[i].name);
		}
        for (int j=0; j<10; j++){
            scanf(" %d", &dt[i].move[j]);
        }
    }
    char seeker[9]; scanf(" %s", seeker);
    int seeked[4]; int idx_seeked=0;
    for (int i=0; i<4; i++){
    	printf("%s\n", dt[i].name);
        if (strcmp(dt[i].name, seeker)==0){ //or use strcmp
        	printf("%s\n", seeker);
            for (int j=0; j<10; j++){ //check seeker's move
                for (int k=0; k<4; k++){
                	printf("k=%d & i=%d\n", k, i);
                    if (k==i){
                        continue;
                    }
                    else if (dt[k].move[j]==dt[i].move[j]){
                    	printf("%d | %d\n", dt[k].move[j], dt[i].move[j]);
                    	printf("~~ %d\n", idx_seeked);
                    	int exist=0;
                        if (idx_seeked==0){
                        	exist=0;
						}else{
							for (int z=0; z<idx_seeked; z++){
								if (seeked[z]==k){
									exist=1;
								}
							}
						}
						if (exist==0){
							seeked[idx_seeked] = k;
							idx_seeked++;
						}
                    }
                }
            }
        }
    }
//    for (int i=0; i<idx_seeked; i++){
//    	printf("%d ", seeked[i]);
//	}
//	printf("\n");
	
    if (idx_seeked==0){
        printf("%s seeks again", seeker);
    }else if (idx_seeked==1){
        printf("%s is caught by %s", dt[seeked[idx_seeked-1]], seeker);
    }else if (idx_seeked==2){
        printf("%s and %s are caught by %s", dt[seeked[idx_seeked-2]].name, dt[seeked[idx_seeked-1]].name, seeker);
    }else if (idx_seeked==3){
        printf("%s, %s, and %s are all caught, %s wins", dt[seeked[idx_seeked-3]].name ,dt[seeked[idx_seeked-2]].name, dt[seeked[idx_seeked-1]].name, seeker);
    }
//	else{
//    	printf("#\n");
//	}
}