#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    char s[N+1];
	    s[N]='\0';
	    scanf("%s",s);
	    int c1=0;
	    for(int i=0;i<N;i++){
	        if(s[i]=='1'){
	            c1++;
	        }
	    }
	    if(N==2 && c1==2){
	        printf("YES\n");
	    }
	    else if(N<3 || c1>3){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
	return 0;
}
