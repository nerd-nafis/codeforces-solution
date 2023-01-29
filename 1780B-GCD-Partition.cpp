#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
	
	
	ll test;   cin>>test;
	
	while(test--)
	{
	    
	    ll n; cin>>n;
	    vector<ll> vector1, prefixSum; 
	    ll max_return = 1, sum = 0; 
	    
	    for (ll i=0; i<n; i++)
	    {
	        ll x;   cin>>x;     vector1.push_back(x); 
	    }
	    
	    prefixSum.push_back(vector1[0]); 
	    
	    for (ll i=1; i<=n; i++)
	    {
	        prefixSum.push_back(vector1[i]+prefixSum[i-1]);
	    }
	    
	    sum = prefixSum[n-1]; 
	    
	    for (ll i=0; i<(n-1); i++)
	    {
	        max_return = max(__gcd(prefixSum[i], sum - prefixSum[i]), max_return);
	    }
	    cout<<max_return<<endl;
	}
	
	return 0;
}
