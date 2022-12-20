//Bubble Sorting
#include<iostream>
using namespace std;
class Sort{
	public:
		int array[10]={10,5,12,13,9,7,11,1,4,5};
		int n,temp,flag;
		Sort(){
			n=sizeof(array)/sizeof(array[0]);
		}
	void sorting(){
		for(int i=0;i<n-1;i++){
			flag=0;
			for(int j=0;j<n-1-i;j++){
				if(array[j]>array[j+1]){
					temp=array[j];
					array[j]=array[j+1];
					array[j+1]=temp;
					flag++;
				}//end if condition
			}//end inner for loop
			if(flag==0){
				break;
			}
		}//end outer for loop
	}//end sorting()
	
	void display(){
		for(int k=0;k<n;k++){
			cout<<array[k]<<" ";
		}
	}
};

int main(){
	Sort s;
	s.sorting();
	s.display();
}
