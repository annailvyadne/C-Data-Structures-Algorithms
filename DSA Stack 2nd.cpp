#include <iostream>
#include <stack>

using namespace std;

/* Write a C++ program to implement a stack using an array with push and pop operations. Check if the stack is full. Go to the editor
Test Data:
MAX_SIZE of the array: 5
Insert some elements onto the stack:
Stack elements: 1 2 5 6 9
Is the stack full? 1
Remove an element from the stack! 1
Stack elements: 2 5 6 9
Is the stack full? 0
*/
void displayStack(stack <int> MySecondStack);

int main(){
	
	stack <int> MySecondStack;
	
	MySecondStack.push(9);
	MySecondStack.push(6);
	MySecondStack.push(5);
	MySecondStack.push(2);
	MySecondStack.push(1);
	
if(!MySecondStack.empty()){
	MySecondStack.pop();
	
	}
	
	displayStack(MySecondStack);
}

void displayStack(stack <int> MySecondStack){
	while(!MySecondStack.empty()){
		cout << MySecondStack.top();
				MySecondStack.pop();
	}
}