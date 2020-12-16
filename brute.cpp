#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
int main(){
    ll t = 1;
    // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        map<ll,ll> mp;
        f(i,0,n){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll k=0;
        if(mp.size()==1) k=(((n-1)*n*(n-2))/6);
        else{
        sort(a,a+n);
        
        for(ll i=0;i<n-2;i++){
           for(ll j=i+2;j<n;j++){
               if(a[j]-a[i]<=2)k+=j-i-1;
               else break;
           }
        }
        }
        cout<<k<<endl;
    }
}