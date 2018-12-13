#include<iostream>
#include<cmath>
using namespace std;

float distance(int x1,int y1,int x2,int y2){
	return pow((pow(abs(x2-x1),2) + pow(abs(y2-y1),2) ),0.5);
}

int is_possible(float distances[], float r){
	int flag=0;
	for(int i=0;i<3;i++){
		if(r>=distances[i]){
			flag++;
		}
	}
	if(flag >= 2){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	float r,distances[3];
	int points[3][2];
	cin>>t;
	while(t--){
		cin>>r;
		for(int i=0;i<3;i++){
			cin>>points[i][0]>>points[i][1];
		}
		distances[0] = distance(points[0][0],points[0][1],points[1][0],points[1][1]);
		distances[1] = distance(points[1][0],points[1][1],points[2][0],points[2][1]);
		distances[2] = distance(points[0][0],points[0][1],points[2][0],points[2][1]);
		if(is_possible(distances,r)){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
}
