#include<iostream>
using namespace std;
int main(){
	int arr[8]={34,53,23,66,64,34,23,52};
	
	for(int i=0;i<8;i++){
		cout<<"at index"<<i<<"="<<arr[i]<<endl;
	}
	
	int position;
	cout<<"enter the position =";
	cin>>position;
	
	for(int i=position;i<8;i++){
		cout<<"at index "<<i<<"="<<(arr[i]=arr[i+1])<<endl;
	}
	
	cout<<"after the deletion of element at"<<position<<"="<<endl;
	
	for(int i=0;i<8;i++){
		cout<<"at index"<<i<<"="<<arr[i]<<endl;
	}
}
