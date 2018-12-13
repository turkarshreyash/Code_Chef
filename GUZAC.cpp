#include<iostream>
#include<vector>
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
	int t,n,k,x,sum,remain,temp,min,max;
	vector<int> a;
	//cin>>t;
	fast_scan(t);
	while(t--){
		max = 0;
		min = 1000000000;
		sum = 0;
		//cin>>n>>k>>x;
		fast_scan(n);
		fast_scan(k);
		fast_scan(x);
		a.assign(1000000000,0);
		for(int i=0;i<=k;i++){
			//cin>>temp;
			fast_scan(temp);
			sum = sum+temp;
			if(temp>max){
				max = temp;
			}
			if(temp<min){
				min = temp;
			}
			a[temp] = 1;
		}
		if(max-min == x){
			max = max - 1;
		}else{
			max = max + x;
		}
		remain = n-k;
		for(int i = max;i>0&&remain>0;i--,remain--){
			if(a[i]==1){
				sum = sum + i;
			}
		}
		cout<<sum<<"\n";
	}
}
