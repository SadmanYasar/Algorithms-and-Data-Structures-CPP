#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int HashTable[10];

int hashfunction(int value) {
    return value % 10;
}

void insert(int value) {
    //index represents the key
    int index = hashfunction(value);
    while(HashTable[index] != 0 && index < sizeof(HashTable)/sizeof(HashTable[0])){
        index++;
        //go to first index if end reached
        if( index == sizeof(HashTable)/sizeof(HashTable[0]) ){
            index = 1;
        }
    }
    HashTable[index] = value;

}

void search(int value) {
    int index = hashfunction(value);
    while(HashTable[index] != value && HashTable[index] != 0 ){
        index++;
        if(index == sizeof(HashTable)/sizeof(HashTable[0])){
            index = 1;
        }

    }

    if(HashTable[index] == value) {
        cout<<"Found at "<<index<<endl;
    }

}




int main()
{
    insert(8);
    insert(3);
    insert(13);
    insert(6);
    insert(4);

    search(8);
    search(3);
    search(13);
    search(6);
    search(4);



    return 0;
}
