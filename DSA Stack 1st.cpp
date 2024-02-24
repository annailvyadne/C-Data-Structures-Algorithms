#include <iostream>
#include <stack>

using namespace std;

void MyFirstStackEmptyPrint(stack <int> MyFirstStack);

int main(){
	
	stack <int> MyFirstStack;
	
/* Write a C++ program to implement a stack using an array with push and pop operations. Find the top element of the stack and check if the stack is empty or not. 
Test Data:
Create a stack object:
Check the stack is empty or not? 1
Insert some elements onto the stack:
Stack elements: 4 5 6 7
Remove an element from the stack! 4
Stack elements: 5 6 7
Top of the element of the stack:
5
*/

MyFirstStack.push(7);
MyFirstStack.push(6);
MyFirstStack.push(5);
MyFirstStack.push(4);

//check if stack is empty
if(!MyFirstStack.empty()){
	MyFirstStack.pop();
}

MyFirstStackEmptyPrint(MyFirstStack);

cout << "Top of the element of the stack: " << MyFirstStack.top() << endl;

return 0;
}


void MyFirstStackEmptyPrint(stack <int> MyFirstStack){
 
while(!MyFirstStack.empty()){
	cout << MyFirstStack.top();
			MyFirstStack.pop();	
	}	
}



