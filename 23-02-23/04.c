#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--){
        int N,X;
        scanf("%d %d",&N,&X);
        
        if(X<(-1*(N-1)) || X>(N+1)){
            printf("-1\n");
        }
        else{
            char s[N+1];
            s[N]='\0';
            if(X>0){
                int m=N+1-X;
                int k=0;
                for(int i=0;i<m;i++){
                    s[i]='*';
                    k=i+1;
                }
                for(;k<N;k++){
                    s[k]='+';
                }
            }
            else if(X<0){
                int m=N+X-1;
                int k=0;
                for(int i=0;i<m;i++){
                    s[i]='*';
                    k=i+1;
                }
                for(;k<N;k++){
                    s[k]='-';
                }
                
            }
            else if(X==0){
                for(int i=0;i<N-1;i++){
                    s[i]='*';
                }
                s[N-1]='-';
            }
            printf("%s\n",s);
        }
    }
	return 0;
}

