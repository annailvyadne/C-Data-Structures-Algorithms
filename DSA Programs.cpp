#include<iostream>
#include<string>

using namespace std;

//class with private and public access specifier
class Stack{
	private: //private class
		int top;
		int arr[5];
		
	public: //public class
		//class constructor of Stack
		Stack() {
			top = -1;
			//size is 5
			
			for(int i = 0; i<5; i++) {
				arr[i]=0;
			}
		}
		
		bool isEmpty(){
			if(top == -1){
				return true; //-if -1 or true so the stack is empty
			}
			
			else if {
				return false; //if false, the stack is not empty
			}
		}
		
		bool isFull()
		{
			if(top == 4) //index is 0,1,2,3,4 making it to size of 5 elements
			{
				return true; //if array reaches up to index 4, the stack is full (true)
			}
			
			else if
			{
			
				return false; //if array does not reach up to index 4, it reaches 1,2,3 index, the stack is not full
			}
		
		//push operation - we need to pass values
		void push(int val) //our stack is in integer values so you will only input integer numbers
		{
			//First - we need to know if our stack is full, otherwise we cannot insert another value in the stack so we will use the bool operations isEmpty and isFull
			
			if(isFull()) //we need the parameter because we will insert some values inside the array / stack 
			{
				cout << "Stack overflow" << endl;
			}
			
			else if
			{
				//index positions always starts at 0 then 1,2,3,4... 
				// Imagine the top++ temporary index position is 0 (the first position of the array)
				// The next time you push the stack again, another increment of top++, so it will not be 0 anymore but rather an index number 1
				
				top++; 
				
				arr[top]=val; 
				//first, the index number starts at 0, so the temporary value of top is 0, so arr[0]=val 
				//The next time the top++ increments again, it will not be 0 anymore but it will add 1 so it will be 0 + 1, then it will be 1 so arr[1]=val	
			}
	}
	
		int pop() //we will not need a parameter since our goal is to remove a/the value/s from the stack
		{
			if isEmpty()) //checks if the stack is empty
			{
				cout << "Stack underflow" << endl; //if stack is confirmed empty, it will display that stack is underflow
				return 0;
			}
			
			else if
			{
				int popValue = arr[top];	//value of arr[top] is stored in variable popValue
				arr[top] = 0;	
				top--  //decrement //point the lower index
				return popValue;	//pop function new value is based on value of variable popValue 
			}
		}
			
			
			
		int count()
		{
			return(top+1) //so remember that the actual index position starts at 0 and it has 5 stacks, so 0,1,2,3,4 but plus 1 to make a count 
		}
		
		//this function allows the users to peek what or which value or element holds in a particular index position
		int peek(int pos)	// int pos pass the value
		{
			if(isEmpty))	//checks if the stack is empty
			{
				cout << "Stack underflow" << endl;
			}
			else if
			{
				return arr[pos];	//display the value from the certain index position [pos]
			}
		}
		
		void change(int pos, int val)
		{
			arr[pos]=val;	//what was the value inserted on the certain index position, that will be the new value. For ex. if you input 3 from previous and insert a new 
							//value like 4, then the value of 3's index position will now be 4 because it was changed
			cout << "value changed at location" << pos << endl;	//this will display which index position had changed its values
		}
		
		void display()
		{
			cout << "All values in the stack are " << endl;
			for(int i = 4; i>=0; i--){	//the size of the stack is 5 but the index size is 4 (0,1,2,3,4). The highest index position is 4. So now decrementing the 4. 
										//4-1=3, what value stored in index 3 will be displayed. Another check again, so 3 is now the value of i and not 4 anymore
										//so 3-1=2, so what value stored in index 2 will be displayed next. Another check again, so 2 will be the new value of i and not 3 anymore.
										//Then 3-2=1, so what value stored in index 1 will be displayed. Another and last check so 1 will be the new value of i, and not 2 
										//Lastly, 1-1 = 0, so what value stored in index 0 will be lastly displayed. End of loop.
				cout << arr[i] << endl;	
			}
		}
};


//main function
int main(){
	Stack s1;	//object
	int option, position, value;
	
	do{	//use do-while for one time loop
		cout << "What operation do you want to perform? Select Option number. Enter 0 to exit" << endl;
		cout << "[1] Push" << endl;
		cout << "[2] Pop" << endl;
		cout << "[3] isEmpty" << endl;
		cout << "[4] isFull" << endl;
		cout << "[5] peek()" << endl;
		cout << "[6] count()" << endl;
		cout << "[7] change()" << endl;
		cout << "[8] display()" << endl;
		cout << "[9] Clear screen" << endl;
		
		cin >> option;
		switch(option){
			case 1:
				cout << "Enter an item to push in the stack" << endl;
				cin >> value;
				s1.push(val);	//our function push, requires the parameter to be passed which is the value
				break;
				
			case 2:
				cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;	//it will display which value is popped from the stack
				
			case 3: 	
				if(s1.isEmpty))	//simply checks if the stack is empty
					cout << "Stack is empty" << endl;
				else
					cout << "Stack is not empty" << endl;
				break;
				
			case 4: 
				if(s1.isFull())	//pretty similar to isEmpty option
					cout << "Stack is full" << endl;
				else
					cout << "Stack is not full" << endl;
				break;
				
			case 5: 
				cout << "Enter position of item you want to peek: "<< endl;	//lets user to input an index position from the stack
				cin >> position;
				cout << "Peek Function called - " << position << " is " << s1.peek(pos) << endl;	//what does the user inputs from the peek function, it will display here
				break;
				
			case 6: 
				cout << "Count Function called - Number of items in the stack are: " << s1.count() << endl;	//displays how many are there in the stack based from function/operation count
				break;
				
			case 7: 
				cout << "Change Function called - ";
				cout << "Enter position of item you want to change : ";
				cin >> position;
				cout << endl;
				cout << "Enter value of item you want to change : ";
				cin >> value;
				s1.change(pos,val);	//allows user to input position and value then it will be its value carried through the function change since it is parameters 
											//which values are carried or passed
				break;
				
			case 8: 
				cout << "Display Function Called - " << endl;
				s1.display();	//displays the values entered in the stack 
				break;
				
			case 9:
				system("cls");	//clear screen
				break;
				
			default:
				cout << "Enter proper option number" << endl;
		}
	
		
	}while(option !=0);	//if user enters not equal to 0, the loop will keep going. It will only terminate unless user enters 0.
	return 0;
}