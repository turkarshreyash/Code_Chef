#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, price, n, money, current_no, min;
	cin>>t;  
	while(t--){
		min = 101;
		money = 0;
		cin>>n>>price;
		for(int i=0;i<n;i++){
			cin>>current_no;
			if(min>current_no){
			 	min = current_no;
			}
			money = money + current_no; 
		}   
		current_no = money/price;
		if(current_no==(money-min)/price){
			 cout<<-1<<"\n";
		}else{
			cout<<current_no<<"\n";
		}
	}
}
