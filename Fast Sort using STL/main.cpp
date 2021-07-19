#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {1, 45, 54, 71, 76, 12};
    int n = sizeof(A)/sizeof(A[0]);

    //sort(first position, last position + 1, optional comparison function)
    //Descending
    sort(A, A+n, greater<int>());
    for(int i = 0; i< n; i++ ) {
        cout << A[i]<<endl;

    }

    //Ascending
    sort(A, A+n);
    for(int i = 0; i< n; i++ ) {
        cout << A[i]<<endl;

    }


    return 0;
}
