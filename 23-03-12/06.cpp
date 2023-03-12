#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int d=0;
        char c='.';
        int prac=0;
        int gap=0;
        int N=s.length();
        for(int i=1;i<N-1;i++){
            gap=0;
            if(s[i]==c){
                for(int j=i;s[j]==c;j++){
                    gap++;
                    i=j;
                }
            }
            if(prac<gap){
                d++;
                prac=gap;
            }
        }
        cout<<d<<endl;
    }
	return 0;
}
