#include<iostream>
using namespace std;
int main(){
	int t,s,C,n,k;
	char string[101];
	cin>>t;
	while(t--){
		s = 0;
		C = 0;
		cin>>n>>k;
		cin>>string;
		for(int i=0;i<n;i++){
			if(string[i] >=65 && string[i]<=91){
				C++;
			}if(string[i] >=97 && string[i]<=123){
				s++;
			}
		}
		C = C+k;
		s = s+k;
		if(C >= n && s >= n){
			cout<<"both"<<endl;
		}else if(C >= n){
			cout<<"brother"<<endl;
		}else if(s >= n){
			cout<<"chef"<<endl;
		}else{
			cout<<"none"<<endl;
		}
		
		
	}
}

