#include<iostream>
using namespace std;


int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

int main(){
	int t;
    long long a,b,gc,lcm;
	cin>>t;
	while(t--){
		lcm = 1;
		cin>>a>>b;
		gc = gcd(a,b);
		lcm = a*b/gc;
		cout<<gc<<" "<<lcm<<endl;
	
}
}
