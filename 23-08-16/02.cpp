//Monsters(Not working Yet)

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int T,N,K;
    cin>>T;
    while(T--){
        cin>>N>>K;
        vector <int> A(N);
        unordered_map <int,vector<int>> M;
        
        for(int i=0;i<N;i++){
            cin>>A[i];
            int r=A[i]%K;
            if(r==0){
                r=K;
            }
            M[r].push_back(i+1);
        }
        for(int i=K;i>0;i--){
            for(int j : M[i]){
                cout << j << " ";
            }
        }
        cout<<endl;
    }
}
