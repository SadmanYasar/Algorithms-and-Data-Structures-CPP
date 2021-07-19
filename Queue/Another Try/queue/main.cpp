#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numberinqueue, Array[10], n, pfront, pback;

bool isFull() {
    if ( numberinqueue == sizeof(Array)/sizeof(Array[0]) ) {
        return true;
    } else return false;
}

bool isEmpty() {
    if ( numberinqueue == 0 ) {
        return true;
    } else return false;


}





void enqueue( int x ) {

       if ( isFull() == true ) {
            cout << "OVERFLOW" <<endl;
       } else {
            if ( pback == sizeof(Array)/sizeof(Array[0]) ) {
            pback = 0;
            Array[pback] = x;
            ++pback;
            ++numberinqueue;

        } else {
            Array[pback] = x;
            ++pback;
            ++numberinqueue;
            }
        }
}

void dequeue() {

    if ( isEmpty() ) {
        cout << "Queue is empty" << endl;
    } else {
        if ( pfront == sizeof(Array)/sizeof(Array[0]) ) {
        pfront = 0;
        Array[pfront] = 0;
        ++pfront;
        --numberinqueue;

    } else {
        Array[pfront] = 0;
        ++pfront;
        --numberinqueue;
        }

    }

}




int main()
{
    pfront = 0;
    pback = 0;
    numberinqueue = 0;
    n = 1;





    return 0;
}
