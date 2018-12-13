#include<iostream>
using namespace std;
int gcd(int x,int y){
	if(x==0)
		return y;
	return gcd(y%x,x);
}

int main(){
	int t,N,A,K,sum_of_angles,d,required_angle;
	cin>>t;
	while(t--){
		cin>>N>>A>>K;
		sum_of_angles = (N-2)*180;
		d = 2*(sum_of_angles - A*N);
		required_angle = A*(N*(N-1)) + d*(K-1);
		d = gcd(required_angle,N*(N-1));
		cout<<required_angle/d<<" "<<N*(N-1)/d<<endl;
	}
}
