#include <iostream>
using namespace std;

class Queue {
public:
	
    int front, rear, size;
    int *arr;
    
    Queue(int s) {
        front = -1;
        rear = -1;
        size = s;
        arr = new int[size];
    }
    ~Queue() {
        delete[] arr;
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return rear == size - 1;
    }
    
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue ini penuh." << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = item;
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue ini kosong." << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front++;
        }
    }
    
    int Front() {
        if (isEmpty()) {
            cout << "Queue ini kosong." << endl;
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if (isEmpty()) {
            cout << "Queue ini kosong." << endl;
            return -1;
        }
        return arr[rear];
    }
    
    void printQueue() {
        if (isEmpty()) {
            cout << "Queue ini kosong." << endl;
            return;
        }
        cout << "Queue : ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " -> ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.printQueue(); 
    q.dequeue();
    
    cout << "Front : " << q.Front() << endl; 
    cout << "Rear : " << q.Rear() << endl; 
    q.printQueue(); 
    
    
    return 0;
}
