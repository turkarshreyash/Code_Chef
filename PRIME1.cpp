#include<iostream>
using namespace std;
bool is_prime(int a){
	if(a==1||a==0){
		return false;
	}if(a==2){
		return true;
	}
	for(int i=3;i*i<=a;i=i+2){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	int a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(i!=2&&i%2==0){
				continue;
			}
			if(i==2){
				cout<<2<<"\n";
			}else if(is_prime(i)){
				cout<<i<<"\n";
			}
		}
		cout<<"\n";
	}
}
