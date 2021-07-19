#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//A stack is a list where insertion and deletion
//can only happen from top of list
//It is a last in first out data structure

//4 operations can be done

//push(x) - inserts value on top of stack
//pop() - removes last element from stack
//isEmpty() - return true if list is empty
//top() - returns value of last element on stack top


int Stack[5], index;

void push( int x ) {
    ++index;
    if( index > (sizeof(Stack)/sizeof(Stack[0])) - 1 ) {
        cout << "Stack overflow" << endl;
        --index;
    } else {
         Stack[index] = x;
         cout << x << " entered at " << index << endl;
    }

}

bool isEmpty() {
    if( index > 0 ){
        return false;
    } else {
        return true;
    }
}

void pop() {
    if(isEmpty() == true ) {
        cout << "Array is empty" << endl;
    } else {
         Stack[index] = 0;
         --index;

    }


}



int top() {
    return Stack[index];
}


int main()
{
    index = 0;





    return 0;
}
