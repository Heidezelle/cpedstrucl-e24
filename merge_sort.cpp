#include <iostream>
using namespace std;

int main(){
	int size,l1,k,h1,l2,h2,i,j,n(5),y(1);
	int num[]={10,30,20,50,40};
	int temp[20];
	for (int size=1;size<n;size=size*2){
		l1=0;
		k=0;
		while(l1+size < n){
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if(h2>=n)
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1 && j<=h2){
				if(num[i] <= num[j])
					temp[k++]=num[i++];
				else
					temp[k++] = num[j++];
			}
			while(i<=h1)
				temp[k++]=num[i++];
			while(j<=h2)
				temp[k++]=num[j++];
			l1=h2+1;
		}
		for(i=l1;k<n;i++)
			temp[k++]=num[i];
		for(i=0;i<n;i++)
			num[i]=temp[i];
			
		cout <<"Pass " <<y++ <<":  ";
		for (int x=0;x<n;x++){
			cout <<num[x] <<" " ;
		}
		for(int m=0;m<n;m++){
			cout<< num[m] <<"," <<num[m+1];
		}
		cout <<endl;
	}
	
}
