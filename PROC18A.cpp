#include<iostream>
using namespace std;
int main(){
	int t, N, K, a[101], max, sum;
	cin>>t;
	while(t--){
		max = 0;
		cin>>N>>K;
		for(int i =0;i<N;i++){
			cin>>a[i];
		}
		for(int i =0;i<N+1-K;i++){
			sum = 0;
			for(int j=0;j<K;j++){
				sum += a[i+j];
			}
			if(sum>max){
				max=sum;
			}
		}
		cout<<max<<endl;
	}
}
