#include <iostream>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
};


void menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n";
	
}



int main(){
while(1)
{
		
	Stack * s = new Stack(100);
	int choice, num;
	main:
		system("pause>0");
		system("cls");
	menu();
	cout <<"Enter choice: ";
	cin >> choice;
	
	if(choice == 1)
	{
		system("pause>0");
		system("cls");
		cout <<"Enter num: ";
		cin >>num;
		s -> push(num);
		goto main;
	}
	
	else if(choice == 2)
	{
		system("pause>0");
		system("cls");
		
		s -> pop();
		
	}
	else if(choice == 3)
	{
		system("pause>0");
		system("cls");
		s ->display();
	}

	else if(choice == 4)
	{
		exit(1);
	}
	
	else
		cout <<"invalid";
		goto main;
	

	return 0;
}
}
