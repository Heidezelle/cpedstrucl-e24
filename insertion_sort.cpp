#include <iostream>
using namespace std;

int main(){
	int num[]={40,30,20,50,10},n(5),y(1);
	for(int i=1;i<n;i++){
		int tmp=num[i];
		for(int j=i-1;j>=0 && tmp<num[j];j--){
			num[j+1] = num[j];	
		}
		int j;
		num[j+1] = tmp;	
		cout <<"Pass " <<y++ <<":  ";
		for (int x=0;x<5;x++){
			cout <<num[x] <<" ";
		}
		cout <<endl;
	}
}
