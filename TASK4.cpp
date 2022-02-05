#include<iostream>
using namespace std;
class Queue{
	public:
	int front;
	int rear;
	int size;
	int *arr;
	int capacity;
	Queue(){
		size=0;
		capacity=0;
		front=0;
		rear=0;
	}
	Queue(int capacity){
	    capacity=capacity;
		front=-1;
		size=capacity;
		rear=-1;
		arr=new int[capacity];
	}
	bool QueueCapacity(){
		if(rear>=(size-1))
		  return true;
		else
		  return false;  
	}
	bool isEmpty(){
		if(front == rear)
			return true;
		else
		    return false;
	}
	void AddMember(int e){
		if(!QueueCapacity()){
			arr[rear]=e;
			rear++;
			
		}
		else{
			cout<<"Queue overflow\n";
		}
	}
	void RemoveMember(){
		if(!isEmpty()){
			for(int j=front;j<(rear-1);j++){
				arr[j]=arr[j+1];
			}
			rear--;
		}
		else{
			cout<<"Queue Underflow\n";
		}
	}
	void display(){
		if (front == rear) {
            printf("\nQueue is Empty\n");
        }
        else{
        	cout<<"Queue\n";
			for(int i=front;i<rear;i++){
				cout<<arr[i]<<"->";
			}
	    }
	}
};
int main(){
	Queue obj(5);
	obj.AddMember(5);
	obj.AddMember(8);
	obj.AddMember(9);
	obj.AddMember(2);
	obj.AddMember(10);
	obj.AddMember(1);
	obj.RemoveMember();
	obj.display();
}
