
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    char s[1005];
	    char p[2010];
	    scanf("%s",s);
	    int count=1;
	    int j=0;
	    char c=s[0];
	    for(int i=1;s[i];i++){
	        c=s[i];
	        if(c==s[i-1]){
	            count++;
	        }
	        else{
	            p[j++]=s[i-1];
	            if(count==1000){
	                p[j++]='1';
	                p[j++]='0';
	                p[j++]='0';
	                p[j++]='0';
	            }
	            else if(count>=100){
	                p[j++]=(count/100)+'0';
	                count=count%100;
	                p[j++]=(count/10)+'0';
	                count=count%10;
	                p[j++]=count+'0';
	            }
	            else if(count>=10){
	                p[j++]=(count/10)+'0';
	                count=count%10;
	                p[j++]=(count)+'0';
	            }
	            else{
	                p[j++]=count+'0';
	            }
	            count=1;
	        }
	    }
	    
	    p[j++]=c;
	            if(count==1000){
	                p[j++]='1';
	                p[j++]='0';
	                p[j++]='0';
	                p[j++]='0';
	            }
	            else if(count>=100){
	                p[j++]=(count/100)+'0';
	                count=count%100;
	                p[j++]=(count/10)+'0';
	                count=count%10;
	                p[j++]=count+'0';
	            }
	            else if(count>=10){
	                p[j++]=(count/10)+'0';
	                count=count%10;
	                p[j++]=(count)+'0';
	            }
	            else{
	                p[j++]=count+'0';
	            }
	    if(strlen(p)<strlen(s)){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    for(int i=0;p[i];i++){
	        p[i]='\0';
	    }
	}
	return 0;
}
