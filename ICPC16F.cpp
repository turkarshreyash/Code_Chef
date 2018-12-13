#include<bits/stdc++.h>

#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t, n, m, d, D, counter, next_edge;
	//queue <pair<ll,ll>> arr;
	cin>>t;
	while(t--){
		
		cin>>n>>m>>d>>D;
		if( ((((m-1)/n )+ 1) > D) || (n*d > m) || ((((m-1)/n )+ 1) > m)){
			cout<<"-1\n";
			continue;
		}
		for(int i = 0 ; i<D&&m>0;i++){
			for(int j = 1 ;j<=n&&m>0;j++,m--){
				if((i+j)>n){
					cout<<j<<" "<<(i+j)-n<<"\n";
				}else{
					cout<<j<<" "<<i+j<<"\n";
				}
			}
		}
		
	
		//arr.clear();
	}
}
