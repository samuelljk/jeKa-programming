/*

    PRAKTIKUM DASPROG 1
    by Samuel Josefano Kaloh | 5025221065
    Problem: Sleep
    Date & Time: 22/9/2022
    
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int wakeH, wakeM, clasH, clasM, trip, minS, sisawaktu, res;
    scanf("%d %d", &wakeH, &wakeM);
    scanf("%d %d", &clasH, &clasM);
    scanf("%d %d", &trip, &minS);
    if (wakeH>=0 && wakeH<=12 && clasH>=0 && clasH<=12 && wakeM>=0 && wakeM<=59 && clasM>=0 && clasM<=59 && trip>=0 && trip<=120 && minS>=0 && minS<=120){
	    if (clasM-wakeM>=0){
	    	if (clasH-wakeH<0){
	    		sisawaktu = ((clasH-wakeH)*-1)*60 + (clasM-wakeM);
			}else{
			    sisawaktu = (clasH-wackeH)*60 + (clasM-wakeM);			
			}
		}
		else{
			    sisawaktu = (clasH-wakeH-1)*60 + ((60-wakeM)+clasM);
		}
		if(sisawaktu-trip>=minS){
			res = sisawaktu-trip;
			printf("Zoro can sleep for another %d minutes :D", res);
		}
		else if(sisawaktu-trip<0){
			printf("Sleepyhead you already late smh");
		}
		else if(sisawaktu-trip<minS){
			printf("Don't sleep again or you'll be late, Zoro");
		}
	}
}