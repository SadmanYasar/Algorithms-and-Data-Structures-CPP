#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node {
    string data;
    int pointer;
};

//NullPointer should be set to -1 if using array element with index O
const int nullpointer = 0;

int startPointer, freelistPointer, newNodePtr, thisNodePtr, prevPtr;
node LinkedList[8];



void InitialiseList() {
    startPointer = nullpointer; //set start pointer
    freelistPointer = 1; //set start position of free list

    for( int i = 1; i<=6; i++ ){ //link all nodes to make freelist
        LinkedList[i].pointer = i + 1;
    }

    LinkedList[8].pointer = nullpointer; //last node of free list

}


void InsertNode(string NewItem) {
    if( freelistPointer != nullpointer ) {
        //list is not full
        newNodePtr = freelistPointer;
        LinkedList[freelistPointer].data = NewItem;
        freelistPointer = LinkedList[freelistPointer].pointer;

        //find insertion point
        thisNodePtr = startPointer;

        while ( thisNodePtr != nullpointer &&
               LinkedList[thisNodePtr].data < NewItem ) {

            prevPtr = thisNodePtr;
            thisNodePtr = LinkedList[thisNodePtr].pointer;

        }

        if ( prevPtr == startPointer ) {
            //new start item
            LinkedList[newNodePtr].pointer = startPointer;
            startPointer = newNodePtr;
        } else {
            //insert new node between previous node and this node
            LinkedList[newNodePtr].pointer = LinkedList[prevPtr].pointer;
            LinkedList[prevPtr].pointer = newNodePtr;
        }

    }





}


void FindNode(string SearchItem) {
    int currentptr = startPointer;
    while (currentptr != nullpointer) {
        if ( SearchItem == LinkedList[currentptr].data ) {
            cout<<SearchItem<<" found at "<<currentptr<<endl;
            return;
        }

        currentptr = LinkedList[currentptr].pointer;
    }

}

void DeleteNode(string Item) {
    int currentptr = startPointer;
    int previouspointer = startPointer;

    //checks if start value is to be removed
    if (Item == currentptr) {
        currentptr = LinkedList[currentptr].pointer;
        return;
    }

    while (currentptr != nullpointer) {
        if (Item == LinkedList[currentptr].data) {
            LinkedList[previouspointer].pointer = LinkedList[currentptr].pointer;
            return;
        }

        previouspointer = currentptr;
        currentptr = LinkedList[currentptr].pointer;
    }


}


int main()
{




    return 0;
}
