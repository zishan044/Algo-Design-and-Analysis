#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,word;
    long long base = 128,mod = 10000000+7,wc=1,i;
    vector<long long> v;
    getline(cin,str);
    stringstream ss(str);
    while(ss>>word){
        long long sum = 0;
        for(i=0; i<word.length(); i++){
            sum = (sum*base + word[i])%mod;
            sum %= mod;
        }
        v.push_back(sum);
    }
    sort(v.begin(),v.end());
    for(i=0; i+1<v.size(); i++){
        if(v[i]!=v[i+1]) wc++;
    }
    cout << wc << endl;
    return 0;
}
