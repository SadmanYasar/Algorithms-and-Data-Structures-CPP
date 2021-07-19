#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Binary Search
//Algorithm
//DATA MUST BE IN ORDER!!!
//Find Middle Number Of Array
//if searchval < middle, avoid other half > middle
//if searchval > middle, avoid other half < middle
//if firstval > lastval, search failed
//Complexity = O[logn]

int Array[12];

void Search(int x) {
    int firstval, lastval, middle;

    firstval = 0;
    lastval = sizeof(Array)/sizeof(Array[0]);

    bool found = false;
    bool searchfailed = false;

    while ( found == false || searchfailed == false ) {
        middle =  round((firstval+lastval)/2);

        if ( x == Array[middle] ) {
            found = true;
            cout<<"Found at "<< middle<<endl;
            break;

        } else if (firstval > lastval) {
            cout << "Not found" <<endl;
            searchfailed = true;
            break;

        } else if (x < Array[middle]) {
            lastval = middle - 1;
        } else firstval = middle + 1;

    }

}

int main()
{
    Array[0] = 3 ;
    Array[1] = 4 ;
    Array[2] = 7 ;
    Array[3] =  9;
    Array[4] =  10;
    Array[5] =  13;
    Array[6] =  15;
    Array[7] =  17;
    Array[8] =  18;
    Array[9] =  20;
    Array[10] =  21;
    Array[11] =  24;



    Search(15);


    return 0;
}
