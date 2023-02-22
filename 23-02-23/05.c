#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--){
        int N,K;
        scanf("%d %d",&N,&K);
        int a[N][2];
        int sum[N][2];
        for(int i=0;i<N;i++){
            scanf("%d",&a[i][0]);
        }
        for(int i=0;i<N;i++){
            scanf("%d",&a[i][1]);
            sum[i][0]=a[i][0]+a[i][1];
            sum[i][1]=i;
        }
        for(int i=0;i<N-1;i++){
            for(int j=0;j<N-1-i;j++){
                if(sum[j][0]>sum[j+1][0]){
                    int temp1=sum[j][0];
                    sum[j][0]=sum[j+1][0];
                    sum[j+1][0]=temp1;
                    int temp2=sum[j][1];
                    sum[j][1]=sum[j+1][1];
                    sum[j+1][1]=temp2;   
                }
            }
        }
        int b[N][2];
        for(int i=0;i<N;i++){
            int p=sum[i][1];
            b[i][0]=a[p][0];
            b[i][1]=a[p][1];
            printf("%d + %d---",b[i][0],b[i][1]);
        }
        printf("\n");
        int s=0;
        int count=0;
        for(int i=0;i<N;i++){
            s=s+b[i][0]+b[i][1];
            if(s>K){
                int flag=0;
                s=s-b[i][1]-b[i][0];
                for(int j=i;j<N;j++){
                    s=s+b[j][0];
                    if(s<=K){
                        count++;
                        flag=1;
                        break;
                    }
                    s=s-b[j][0];
                }
                
            }
            count++;
        }
        printf("%d\n",count);
    }
	return 0;
}

