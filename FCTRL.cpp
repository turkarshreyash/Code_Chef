#include<bits/stdc++.h>
using namespace std;
int find_trailing_zeros(int num){
	int zeroes = 0;
	for(int i = 5;i<=num;i = i*5){
		zeroes += num/i;
	}
	return zeroes;
}

void fast_scan(int &number){
	bool negative = false;
	register int c = getchar();
	number = 0;
	if(c==45){
		negative = true;
		c = getchar();
	}
	for(;c>47&&c<58;c=getchar()){
		number = number*10  + c - 48;
	}
	if(negative)
		number = number*-1;	
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, num, trailing_zereos;
	fast_scan(t);
	while(t--){
		fast_scan(num);
		trailing_zereos = find_trailing_zeros(num);
		cout<<trailing_zereos<<"\n";
	}
}
