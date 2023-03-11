#include <bits/stdc++.h>

using namespace std;

bool compare(int a,int b){
    string s1=to_string(a);
    string s2=to_string(b);
    return s1+s2>s2+s1;
}

int main()
{
    int N;
    cout<<"Number of terms in Array:";
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a,a+N,compare);
    for(int i=0;i<N;i++){
        printf("%d",a[i]);
    }
    
    return 0;
}
