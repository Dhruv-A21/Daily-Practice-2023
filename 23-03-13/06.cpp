// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


 // } Driver Code Ends
class Solution {
  public:
    int workDone(int n, vector<int> &a, int cap) {
        int w=0;
        int last=0;
        int c=0;
        int f[10001]={0};
        int belt[cap];
        for(int i=0;i<n;i++){
            if(c<cap){
                if(f[a[i]]==0){
                    f[a[i]]++;
                    w++;
                    belt[c]=a[i];
                    c++;
                }
                else if(f[a[i]]>=1){
                    f[a[i]]++;
                }
            }
            else{
                last=belt[0];
                if(f[a[i]]>=1){
                    f[a[i]]++;
                }
                else if(f[a[i]]==0){
                    f[last]=0;
                    for(int j=0;j<cap-1;j++){
                        belt[j]=belt[j+1];
                    }
                    w++;
                    belt[cap-1]=a[i];
                    f[a[i]]++;
                }
            }
        }
        return(w);
    }
};


// { Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        int cap;
        scanf("%d",&cap);
        
        vector<int> a(n);
        Array::input(a,n);
        
        Solution obj;
        int res = obj.workDone(n, a, cap);
        
        cout<<res<<endl;
        
    }
}
  // } Driver Code Ends
