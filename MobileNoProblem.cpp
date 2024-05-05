#include <iostream>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int REAR=-1,FRONT=0,TOP=-1;
const int CAPACITY=7;
int MOBILE_STACK[CAPACITY];
int MOBILE_QUEUE[CAPACITY];
//u can also use creates constatnt in c : #define capasity 10 
int IsFullS(){
	if(TOP==CAPACITY-1){
		
		return 1;
	}
	else{
		return 0;
	}
}
int IsemptyS(){
	if(TOP==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(int element){

	
	if(IsFullS()){
		cout<<"stack is full";
	}
	else{
		TOP++;
			MOBILE_STACK[TOP]=element;
	}
}
int IsFullQ(){
	if(REAR==CAPACITY-1){
		
		return 1;
	}
	else{
		return 0;
	}
}
int IsemptyQ(){
	if(REAR==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void enqueue(int element){
	
	if(IsFullQ()){
		cout<<"QUEUE is full";
	}
	else{
		REAR++;
			MOBILE_QUEUE[REAR]=element;
		//cout<<"element inserted"<<endl;
	}
}
void TraverseS(){
	for(int i=TOP;i>=0;i--){
		cout<<MOBILE_STACK[i]<<endl;
		
	}
	
}
int dequeue(){
	int element;
	
	if(IsemptyQ()){
		cout<<"QUEUE is empty";
	}
	else{
		 element=MOBILE_QUEUE[FRONT];
		
		for(int i=FRONT;i<=REAR;i++){
			
			MOBILE_QUEUE[i]=	MOBILE_QUEUE[i+1];
		
	}
	
	REAR--;
	//cout<<<<element<<"element Deleted"<<endl;
	}
	return element;
}
void traverse(){
	for(int i=FRONT;i<=REAR;i++){
		cout<<	MOBILE_QUEUE[i]<<" ";
		
	}

}
 int main() {
  
   
   
   cout<<"enter MOBILE NO of queue"<<endl;
   for(int i=0;i<CAPACITY;i++){
   		
   				int element;
				cin>>element;
		   		enqueue(element);
   }
   cout<<"enter MOBILE NO of queue ENTERED"<<endl;
	 for(int i=0;i<CAPACITY;i++){
   		
   				int no;
				no=dequeue();
		   		push(no);
   }
   cout<<"stack is: "<<endl;
   TraverseS();
   
	return 0;
	
}
