#include<bits/stdc++.h>
using namespace std;
int func(string str){
    int count=0;
    for(int i=1;i<str.length()-1;i++){
        if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            count++;
        }
        else{
            continue;
        }
    }
    return count;
}
int main()
{
    string str;
    getline(cin,str);
    int ans = func(str);
    cout<<ans<<endl;
    return 0;
}

// abbcdeffghh