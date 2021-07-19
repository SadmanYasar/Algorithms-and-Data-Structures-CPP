#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Array[5];


void Sort() {
    for (int j=0; j< (sizeof(Array)/sizeof(Array[0]))-1; j++) {
         for (int i=0; i< (sizeof(Array)/sizeof(Array[0]))-1; i++) {
            if (Array[i] < Array[i+1]) swap(Array[i], Array[i+1]);
        }
    }

    for (int j=0; j< (sizeof(Array)/sizeof(Array[0])); j++) {
        cout<<Array[j]<<endl;
    }


}

int main()
{
    Array[0] = 4;
    Array[1] = 10;
    Array[2] = 3;
    Array[3] = 6;
    Array[4] = 2;
    Sort();

    return 0;
}
