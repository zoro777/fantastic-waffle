#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define S second
#define F first

typedef long long ll;

#define ld long double

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int co=0;
		map<ll,ll> m;
		ll x;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x!=0 && x!=1 && x!=-1){
				co++;
			}else{
				m[x]++;
			}
		}
		if(n==1){
			cout<<"yes"<<endl;
			continue;
		}
		if(co>1){
			cout<<"no"<<endl;
		}else{
			ll a = m[0];
			ll b = m[1];
			ll c = m[-1];
			ll d = n-a-b-c;
			if(c>1){
				if(b>=1 && d==0){
					cout<<"yes"<<endl;
				}else{
					cout<<"no"<<endl;
				}
			}else if(c==1){
				if((a>=1 || b>=1)&&d==0){
					cout<<"yes"<<endl;
				}else{
					cout<<"no"<<endl;
				}
			}else{
				cout<<"yes"<<endl;
			}

		}
	}
}
