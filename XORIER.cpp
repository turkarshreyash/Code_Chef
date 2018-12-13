#include<iostream>
#define fs fast_scan
#define gc getchar//_unlocked
using namespace std;
void fast_scan(register int &number){                     
 	register int c = gc();					
  	number = 0;
  	while(c==32 || c==10){						
   		c = gc();
	  }
	 for(;c>47&&c<58;c=gc()){  
	 	number = (number<<3) +(number<<1)+ c - 48;           
	 }						
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int E[100001], O[100001], count;
	register int t, temp, e, o, n;
	//cin>>t;
	fs(t);
	while(t--){
		e = 0;
		o = 0;
		count=0;
		//cin>>n;
		fs(n);
		for(int i=0;i<n;i++){
			//cin>>N[i];
			fs(temp);
			if(temp%2==0){
				E[e++] = temp;
			}else{
				O[o++] = temp;
			}
		}
		
		for(int i = 0;i<e-1||i<o-1;i++){
			for(int j = i+1;j<e||j<o;j++){
				if(j<o){
					if(O[i]!=O[j]){
						if((O[i]^O[j])>2){
							//cout<<N[i]<<" "<<N[j]<<"\n";
							count++;
							}
					}
				}
				if(j<e){
					if(E[i]!=E[j]){
						if((E[i]^E[j])>2){
							//cout<<N[i]<<" "<<N[j]<<"\n";
							count++;
							}
					}
				}
			}
		}
		cout<<count<<"\n";
	}
}

