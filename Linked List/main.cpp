#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Linked List
//Dynamic Data Structure
//Undo functionality
//Browser cache
//Polynomial addition
//Prioritised job queues
//Implement other structures like stack, queue, trees and graphs


struct node {
    string data;
    int link;
};

node LinkedList[6];
int ptr, prevPtr, nextFree, start;
bool found;

void traverse() {
    ptr = start;
    while(ptr != 0) {
        cout<<LinkedList[ptr].data<<endl;
        ptr = LinkedList[ptr].link;
    }
}

void searchList(string searchItem) {
    ptr = start;
    while ( ptr != 0 ) {
        if ( LinkedList[ptr].data == searchItem ) {
            found = true;
            break;
        } else {
            ptr = LinkedList[ptr].link;
        }
    }

    if (found == true) {
        cout << searchItem << " exists" << endl;
    } else cout << "Does not exist" << endl;
}

void removeItem(string itemToRemove) {
    ptr = start;
    prevPtr = start;

    if ( itemToRemove == LinkedList[ptr].data ) {
        start = LinkedList[ptr].link;
        cout << itemToRemove << " has been removed" << endl;
        return;
    }

    while ( ptr != 0 ) {
        if ( itemToRemove == LinkedList[ptr].data ) {
            LinkedList[prevPtr].link = LinkedList[ptr].link;
            cout << itemToRemove << " has been removed" << endl;
            return;
        } else {
            prevPtr = ptr;
            ptr = LinkedList[ptr].link;
        }
    }
}

void insertIntoList(string newItem) {
    //store new item at next free pointer
    LinkedList[nextFree].data = newItem;

    //check if this is the first item
    if( nextFree == 1 ){
        ++nextFree;
        return;
    }

    //traversing linked list
    ptr = start;
    while( ptr != 0 ){
        if( newItem < LinkedList[ptr].data){
            //input lies behind current data
            //so input must point to this
            LinkedList[nextFree].link = ptr;

            if( start == ptr ) {
                //reset start to nextfree
                start = nextFree;
            } else {
                //replace preceding item's pointer
                //to point to current item
                LinkedList[prevPtr].link = nextFree;

            }
            break;

        } else {
            prevPtr = ptr;
            ptr = LinkedList[ptr].link;
        }

    }

    //new node must belong at the end of list
    if( ptr == 0 ) {
        LinkedList[prevPtr].link = nextFree;
    }

    ++nextFree;


}




int main()
{
    nextFree = 1;
    start = 1;

    LinkedList[0].data = "Chloe";
    LinkedList[1].data = "Fracis";
    LinkedList[2].data = "Beatrix";
    LinkedList[3].data = "David";
    LinkedList[4].data = "Edward";
    LinkedList[5].data = "Abigail";

    LinkedList[0].link = 4;
    LinkedList[1].link = 0;
    LinkedList[2].link = 1;
    LinkedList[3].link = 5;
    LinkedList[4].link = 2;
    LinkedList[5].link = 3;

    traverse();









    return 0;
}
