#include <iostream>
using namespace std;

int main(){
	int y = 1;
	int num[]={35,10,55,20,5}, swap;
	for(int i=5;i>1;i--){
		for (int j=0; j<(i-1) ;j++){
			if(num[j]>num[j+1]){
				swap = num[j];
				num[j] = num[j+1];
				num[j+1] = swap;	
			}
			
		}
		cout <<"\nPass " <<y++ <<":  ";
		for(int k = 0; k < 5; k++)
			cout << num[k] << " ";

		for(int j = 0; j<i-1; j++)
			cout << " -> Swapped " << "(" << num[j] << ", " << num[j+1] << ")";
		cout << endl;
		
		}
	}


