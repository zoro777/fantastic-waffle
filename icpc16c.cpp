#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define S second
#define F first

typedef long long ll;

ll arnum(ll ar[], ll n){
	ll ans=0;
	for(int i=0;i<n;i++){
		ans*=10;
		ans+=ar[i]*10;

	}
	ans/=10;
	return ans;
}

ll cal(ll n){
	ll ans=0;
	while(n>0){
		ans+=n%10;
		n/=10;
	}
	return ans;
}
vector<ll> v;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){

		int dd;
		scanf("%d",&dd);
		ll sum=cal(dd);

		ll y = sum%9;
		ll ans = y+1;
		cout<<ans<<endl;
	}

}
