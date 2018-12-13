#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t, p, menu_count, mul,item_price;              // Initializing variables to be used.
	cin>>t;									  // Taking no of test cases
	while(t--){								  //starting while loop for each test case and decrmenting t
		cin>>p;      // Taking p for each test case
		menu_count = 0;                            
		for(int po = 11;po>=0||p!=0;po--){
			item_price = pow(2,po);
			mul = p/item_price;
			p = p-mul*item_price;
			menu_count = menu_count + mul;
		}
		cout<<menu_count<<endl;
	}
}
