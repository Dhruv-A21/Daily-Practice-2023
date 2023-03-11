#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    printf("Enter the number of strings:");
    cin>>T;
    string s[T];
    for(int i=0;i<T;i++){
        cin>>s[i];
    }
    char c[100000];
    for(int i=0;s[0][i]||s[1][i];i++){
        if(s[0][i]==s[1][i]){
            c[i]=s[0][i];
        }
        else{
            break;
        }
    }
    for(int i=0;i<T;i++){
        int l=strlen(c);
        for(int j=0;c[j];j++){
            if(c[j]==s[i][j]){
                continue;
            }
            else{
                for(int k=j;k<l;k++){
                    c[k]='\0';
                }
            }
        }
    }
    cout<<"Common Prefix:"<<c;
    return 0;
}
