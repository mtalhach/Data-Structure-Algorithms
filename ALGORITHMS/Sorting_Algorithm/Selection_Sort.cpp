#include<iostream>
using namespace std;
class Sort{
	public:
		int a[6]={7,4,10,8,3,1};
		int n=sizeof(a)/sizeof(a[0]);
		int temp,min;
		void selectionSort(){
			for(int i=0;i<n-1;i++){
				min=i;
				for(int j=i+1;j<n;j++){
					if(a[j]<a[min]){
						min=j;
					}
				}//end inner for loop
				if(min!=i){
					temp=a[i];
					a[i]=a[min];
					a[min]=temp;
				}//end if codition
			}//end outer for loop
		}//end method
		
		void display(){
			for(int k=0;k<n;k++){
				cout<<a[k]<<" ";
			}
		}
};

int main(){
	Sort s;
	s.selectionSort();
	s.display();
}
