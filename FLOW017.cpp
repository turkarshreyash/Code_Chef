#include<iostream>
using namespace std;
int main(){
	int t,max, max_n;
	int arr[3];
	cin>>t;
	while(t--){
		max_n = 0;
		cin>>arr[0]>>arr[1]>>arr[2];
		for(int i=0;i<3;i++){
			if(max_n < arr[i]){
				max_n = arr[i];
				max = i;
			}
		}
		max_n = 0;
		arr[max] = 0;
		for(int i=0;i<3;i++){
			if(max_n < arr[i]){
				max_n = arr[i];
				max = i;
			}
		}
		cout<<max_n<<endl;
		
	}
}
