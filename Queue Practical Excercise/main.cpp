#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//It's given an array (indexed from 1)
//of N elements on which we make M queries:

//add(Left, Right, X) - all the elements between the position Left
//and Right (1<=Left<=Right<=N) are raising their values with X.

//After all the operations are completed, print the array.

//example

//Array: 1 1 1 4 5 6

//operations: (1, 5, 2), (2, 3, 10)

//Final array: 3 13 13 6 7 6

int Array[7];



void Add( int left, int right, int X ) {
    for ( int i = left; i <= right  ; i++ ) {
        Array[i] = Array[i] + X;

    }

     for ( int i = 1; i <= 6  ; i++ )
        cout << Array[i] << endl;
}



int main()
{
    Array[1] = 1;
    Array[2] = 1;
    Array[3] = 1;
    Array[4] = 4;
    Array[5] = 5;
    Array[6] = 6;

    Add(1,5,2);
    Add(2, 3, 10 );


    return 0;
}
