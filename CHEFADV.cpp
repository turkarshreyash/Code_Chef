#include<iostream>
#define fs fast_scan
#define ll long long
using namespace std;

void fast_scan(ll &number){                     
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
	ll t, n,m,x,y;
	//cin>>t;
	fs(t);
	while(t--){
		//cin>>n>>m>>x>>y;
		fs(n);
		fs(m);
		fs(x);
		fs(y);
		n--;
		m--;
		if((n%x==0)&&(m%y==0)){
			cout<<"Chefirnemo\n";
		}else if((((n-1)%x==0)&&((m-1)%y==0))&&(n!=0&&m!=0)){
			cout<<"Chefirnemo\n";
		}
		else{
			cout<<"Pofik\n";
		}
	}
}
