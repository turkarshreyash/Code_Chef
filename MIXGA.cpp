#include<bits/stdc++.h>
#include<cmath>

void fast_scan(int &number){                     
 	register int c = getchar();					
  	number = 0;
  	while(c==32 || c==10){						
   		c = getchar();
	  }
	 for(;c>47&&c<58;c=getchar()){  
	 	number = number*10 + c - 48;           
	 }						
}




using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k,temp,sum;
	//cin>>t;
	fast_scan(t);
	while(t--){
		sum=0;
		//cin>>n>>k;
		fast_scan(n);
		fast_scan(k);
		for(int i=0;i<n;i++){
			fast_scan(temp);
			if(i%2==0){
				if(sum>=0) sum += temp;
				else sum -= temp;
			}else{
				if(sum>=0) sum-=temp;
				else sum+=temp;
			}
		}
	if(abs(sum) >= k){
			cout<<1<<"\n";
		}else{
			cout<<2<<"\n";
		}
}
}
