#include<iostream>
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
	int t, g ,i, n, q;
	//cin>>t;
	fast_scan(t);
	while(t--){
		//cin>>g;
		fast_scan(g);
		while(g--){
			//cin>>i>>n>>q;
			fast_scan(i);
			fast_scan(n);
			fast_scan(q);
			if(q==i||n%2==0){
				cout<<n/2<<"\n";
			}
			else if(q!=i){
				cout<<n/2+1<<"\n";
			}
		}
	}
}
