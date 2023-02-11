#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);
        int max=0;
        int a[N];
        scanf("%d",&a[0]);
        int min=a[0];
        for(int i=1;i<N;i++){
            scanf("%d",&a[i]);
            if(max<a[i]){
                max=a[i];
            }
            if(min>a[i]){
                min=a[i];
            }
        }
        printf("Min=%d Max=%d\n",min,max);
    }
    return 0;
}
