#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&t);
		int co=0;
		map<ll,ll> m;
		ll x;
		for(int i=0;i<n;i++){
			scanf("%lld",&x);
			if(x!=0 && x!=1 && x!=-1){
				co++;
			}else{
				m[x]++;
			}
		}
		if(n==1){
			printf("yes\n");			
			continue;
		}
		if(co>1){
			printf("no\n");
		}else{
			ll a = m[0];
			ll b = m[1];
			ll c = m[-1];
			ll d = n-a-b-c;
			if(c>1){
				if(b>=1 && d==0){
					printf("yes\n");			
				}else{
					printf("no\n");
				}
			}else if(c==1){
				if((a>=1 || b>=1)&&d==0){
					printf("yes\n");			
				}else{
					printf("no\n");
				}
			}else{
				printf("yes\n");			
			}

		}
	}
}
