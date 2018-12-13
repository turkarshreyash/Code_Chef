#include<iostream>
using namespace std;
void fast_scan(int &number){                     
 	register int c = getchar();					
  	number = 0;
  	while(c==32 || c==10){						
   		c = getchar();
	  }
	 for(;c>47&&c<58;c=getchar()){  
	 	number = (number<<3) +(number<<1)+ c - 48;           
	 }						
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,s,a,b;
	//cin>>t;
	fast_scan(t);
	while(t--){
		//cin>>n>>x>>s;
		fast_scan(n);
		fast_scan(x);
		fast_scan(s);
		for(int i=0;i<s;i++){
			//cin>>a>>b;
			fast_scan(a);
			fast_scan(b);
			if(x==a){
				x=b;
			}else if(x==b){
				x=a;
			}
		}
		cout<<x<<"\n";
	}
}
