#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//using appearance array, we can sort a set of numbers like bubble sort
//How?
//first use the appearance array to increment index on where
//numbers exist.
//Then search through array from index 0 to see where index value > 0
//Store the index value and display it

ifstream f("data.in");
ofstream g("data.out");

int n, x, Aglobalarray[101], maximum;


int main()
{
    f>>n;
    for(int i=1; i<=n; i++  ) {

        f>>x; //add number from file to x

        ++Aglobalarray[x]; //increment index

        maximum = max(maximum, x); //shortens loop

    }

    for(int i=0; i<=maximum; i++ ) {

        if( Aglobalarray[i] > 0 ) {

           for( int j=1; j<=Aglobalarray[i]; j++  ) {
                cout << i << endl;

           }

        }

    }

    return 0;
}
