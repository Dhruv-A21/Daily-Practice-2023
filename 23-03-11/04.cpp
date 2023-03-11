#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    printf("Size of array:");
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a,a+N);
    int h=N/2;
    if(N%2==1){
        cout<<a[N-1]<<' ';
    }
    for(int i=0;i<h;i++){
        cout<<a[i]<<' '<<a[h+i]<<' ';
    }
    
    return 0;
}
