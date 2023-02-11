#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d",&T);
    while(T--){
        long int N;
        scanf("%ld",&N);
        long int s=sqrt(N);
        long int p=s*s;
        if(p==N){
            printf("Perfect Square\n");
        }
        else{
            printf("Not a Perfect Square\n");
        }
    }
    return 0;
}
