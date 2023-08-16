//Tiles Comeback

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int T,N,K;
    cin>>T;
    while(T--){
        cin>>N>>K;
        vector <int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        int s=A[0];
        int e=A[N-1];
        int se=0;
        int ee=N-1;
        int c=0;
        bool flag=false;
        for(int i=0;i<N;i++){
            if(A[i]==s){
                c++;
                se=i;
            }
            if(c>=K){
                se=i;
                break;
            }
        }
        if(c<K){
            goto END;
        }
        else if(s==e){
            if(se<=N-1){
                flag=true;
            }
        }
        else{
            c=0;
            for(int i=N-1;i>se;i--){
                if(A[i]==e){
                    c++;
                    ee=i;
                }
                if(c>=K){
                    ee=i;
                    flag=true;
                    break;
                }
            }
        }
        END:
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
