#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cout<<"enter the size of array=";
	cin>>size;
	int arr[size]={11,22,33,44,55,66,77,88,99};
	
	for(int i=0;i<=size-1;i++){
		cout<<arr[i]<<" ";
	}
	int position;
	cout<<"enter the position at which insertion of array=";
	cin>>position;
	
	int temp=arr[position];
	
	for(int i=size-1;i>=position;i--){
		
		
		arr[i]=arr[i-1];
		
		cout<<"at indexing"<<i<<" ="<<arr[i]=arr[i-1];
	}
	
	int element;
	cout<<"enter the element=";
	cin>>element;
	
	cout<<"the given element at indexing"<<position<<"="<<arr[position]=element;
	
	return 0;
}
