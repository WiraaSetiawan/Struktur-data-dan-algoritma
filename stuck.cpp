#include <iostream>
using namespace std;

class Stack {
public:
	
    int size; // ukuran stack
    int top; // indeks elemen teratas
    int *stack; // array untuk menampung elemen stack

    Stack(int size) {
        this->size = size;
        top = -1;
        stack = new int[size];
    }

    ~Stack() {
        delete[] stack;
    }

    // menambah elemen ke dalam stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack penuh. Push gagal." << endl;
            return;
        }
        stack[++top] = value;
    }

    // menghapus elemen dari stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong. Pop gagal." << endl;
            return;
        }
        top--;
    }

    // mengambil elemen teratas dari stack
    int topValue() {
        if (isEmpty()) {
            cout << "Stack kosong. Top gagal." << endl;
            return -1;
        }
        return stack[top];
    }

    // memeriksa apakah stack kosong
    bool isEmpty() {
        return top == -1;
    }

    // memeriksa apakah stack penuh
    bool isFull() {
        return top == size - 1;
    }
};

int main() {
    Stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    cout << stack.topValue() << endl;

    stack.pop();
    stack.pop();
    stack.pop();

    cout << stack.topValue() << endl;

    return 0;
}

