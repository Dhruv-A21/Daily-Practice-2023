#include <stdio.h>

int main(void) {
	int T;
	int a[5];
	scanf("%d",&T);
	while(T--){
	    int sum=0;
	    for(int i=0;i<5;i++){
	        scanf("%d",&a[i]);
	        sum=sum+a[i];
	    }
	    switch (sum){
	        case 0:printf("Beginner\n");break;
	        case 1:printf("Junior Developer\n");break;
	        case 2:printf("Middle Developer\n");break;
	        case 3:printf("Senior Developer\n");break;
	        case 4:printf("Hacker\n");break;
	        case 5:printf("Jeff Dean\n");break;
	        
	    }
	}
	return 0;
}
