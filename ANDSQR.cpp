#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPerfectSquare(ll x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 



int main(){
	int t, N, Q, count,len,I,L;
	ll arr[101];
	ll temp;
	cin>>t;
	while(t--){
		cin>>N>>Q;
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		while(Q--){
			cin>>L>>R;
			for(int i = L;i<=R;i++){
				len = R-L+1;
				for(int step = 0; step<=len;step++){
					if(step==0){
						temp = arr[i];
					}else{
						temp = arr[i];
						for(int j=i+1;j<=step+i&&j<=R;j++){
							temp = temp&arr[j];
						}
					}
				}
			}
			cout<<
		}
		
		
		
		
		
		
		cout<<count<<"\n";	
		}
	}
}
