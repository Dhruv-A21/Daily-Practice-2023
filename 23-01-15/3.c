#include <stdio.h>
#include <math.h>

int main(void) {
	float T,A,B,C,D;
	scnaf("%f",&T);
	while(T--){
	    scanf("%f %f %f %f",&A,&B,&C,&D);
	    float a,b;
	    a=sqrt((pow(A,2))+(pow(B,2)));
	    b=sqrt((pow(C,2))+(pow(D,2)));
	    if(a>b){
	        printf("ALEX\n");
	    }
	    else if(b>a){
	        printf("BOB\n");
	    }
	    else{
	        printf("EQUAL\n");
	    }
	}
	return 0;
}

