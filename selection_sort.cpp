#include <iostream>
using namespace std;

int main(){
	int num[]={30,40,20,50,10},n(5),y(1);
	for (int i=0;i<n-1;i++){
		int min=num[i], index(i);
		for (int j=i+1;j<n;j++){
			if(num[j] < min){
				min=num[j];
				index=j;
			}
		}
		num[index]=num[i];
		num[i]=min;
		cout <<"Pass " <<y++ <<":  ";
		for (int x=0;x<5;x++){
			cout <<num[x] <<" ";
		}
		cout <<endl;
	}
}
