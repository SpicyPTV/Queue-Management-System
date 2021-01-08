#include <iostream>
using namespace std; 

class Queue { 
    int size; 
    int* queue; 
    
    public:
    Queue() {
        size = 0; // Storess size
        queue = new int[100]; // Creates Array to hold data
    }
    void remove() { 
        if (size == 0) { 
            cout << "Queue is empty"<<endl; 
            return; 
        } // Code for empty queue
        else { 
            for (int i = 0; i < size - 1; i++) { 
                queue[i] = queue[i + 1]; 
            } // Shifts the queue along
            size--; // Decreases size by 1
        } 
    } 
    void print() { 
        if (size == 0) { 
            cout << "Queue is empty"<<endl; 
            return; 
        } // Code for empty queue
        for (int i = 0; i < size; i++) { 
            cout<<queue[i]<<" <- ";
        } // Prints queue
        cout <<endl;
    }
    void add(int data) {
        queue[size] = data; // Adds number to end of queue
        size++; // Increases size variable
    }
    Queue operator+(Queue &obj) {
		Queue res;
		for(int i=0;i<this->size;i++) {
  		res.add(this->queue[i]);
		}
		for(int i=0;i<obj.size;i++) {
			res.add(obj.queue[i]);
		}
		return res; 
	}
}; 

int main() { 
    Queue q; 
    /* Delete this comment and write your commands 
    
    Example:

    q.add(42); q.add(2); q.add(8); q.add(1); 
    q.remove(); 
    q.add(128); 
    q.print(); */
    return 0; 
}
