#include<iostream>
using namespace std;


int main(){
	
	int toSearch, no;
	bool flag=0;
	
	cout<<"Enter no. of elements of Array : ";
	cin>>no;
	cout<<"\n";
	cout<<"Please Enter sorted elements of Array\n";
	
	int array[no];
	int len = sizeof(array)/sizeof(int);
	
	for(int i=0; i<no; i++){
		cout<<"Enter element "<< i+1 <<": ";
		cin>>array[i];
	}
	
	cout<<"\nPlease Enter any number for search : ";
	cin>>toSearch;
	
	int low = 0;
	int high = len-1;
	int mid;
	
	while(low<=high){
		mid=(low + high)/2;
		
		if(array[mid]==toSearch){
			
			
			flag = 1;
			cout<<array[mid]<<" has been found";
			break;
		}
		if(array[mid] < toSearch){
			
			low = mid + 1;
		}
		else{
			
			high = mid - 1;
		}
	}
	if(flag == 0){
		
		cout<<"\n" <<toSearch<< "has not found";
	}
	
	cout<< "\n\nLength of Array is: "<<len;
	return 0;
}
