#include<iostream>
void decimal_to_nbase(int num, int n, int k){
	if(k==0){
		return;
	}
	std::cout<<num%n<<" ";
	decimal_to_nbase(num/n,n,k-1);
}
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int a,n,k;
	std::cin>>a>>n>>k;
	decimal_to_nbase(a,n+1,k);
}
