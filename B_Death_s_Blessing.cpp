#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            
        }
        int i=0;int j=n-1;
        int cnt=0;
        while(cnt<n and i<j){
            if(b[i]<b[j]){
                ans+=b[i];
                i++;
            }
            else{
                ans+=b[j];
                j--;
            }
        }
        cout<<ans<<endl;
    }
}