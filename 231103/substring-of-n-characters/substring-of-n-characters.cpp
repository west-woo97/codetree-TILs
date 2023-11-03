#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int alpha[26];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num,len,result=0;
    string str;
    cin>>num>>str;
    len = str.size();
    int l=0,r=0,cnt=0;
    while(1){
        while(cnt<=num && r<len){
            int idx = str[r++]-'a';
            alpha[idx]++;
            if(alpha[idx]==1) cnt++;
            if(cnt>num) break;
            result = max(result,r-l);
        }
        if(r==len) break;
        while(cnt>num){
            int val = str[l]-'a';
            l++;
            alpha[val]--;
            if(alpha[val]==0) cnt--;
        }
    }
    cout<<result;
    return 0;
}