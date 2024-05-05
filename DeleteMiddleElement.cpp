/*Delete middle element of a stack
Given a stack with push(), pop(), and empty() operations, The task is to delete the middle element of it without using any additional data structure.

Input  : stack[] = [1, 2, 3, 4, 5]
Output : stack[] = [1, 2, 4, 5]

Input  : stack[] = [1, 2, 3, 4, 5, 6]
Output : stack[] = [1, 2, 4, 5, 6]*/



/*Although it is good,but still needs some modifications as it has some errors which give incorrect output*/
#include<iostream>
#include<stdlib.h>
using namespace std;
const int size=10;
int stack[size];
int i; int top=-1;
int isFull(){
	if(top==size-1){
		return 1;
	}
	else {
		return 0;
	}
}
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void  push(int x){
	if(isFull()){
		cout<<"Stack is full.\n";
	}
	else{
		++top;
		stack[top]=x;
	}
}
void pop(int x){
	if(isEmpty()){
		cout<<"Stack is empty.\n";
	}
	else{
		x=stack[top];
		--top;
	}
}
void deleteMiddle(){
	int mid=size/2;
	if(isEmpty()){
		cout<<"stack is empty.\n";
	}
	else{
		for(int i=mid;i<size-1;i++){
			stack[i]=i+1;
		}
		top--;
	}
}
void traverse(){
	
	cout<<"stack elements are:\n";
	if(top == -1)   
    {  
        cout<<"stack is empty";
    }  
	for (i=top;i>=0;i--)  
    {  
        cout<<stack[i]<<"\n";
    }  
    
}
int main(){
	int n;
	int stack[n];
	
	cout<<"enter size of stack:\n";
	cin>>n;
	cout<<"enter elements of stack:\n";
	for(i=0;i<n;i++){
		cin>>stack[i];
	}
	for(i=0;i<n;i++){
		push(i);
	}
	deleteMiddle();
	traverse();
	return 0;
	
}
