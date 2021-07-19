#include <iostream>
#include <bits/stdc++.h>

using namespace std;
ifstream f("data.in");
ofstream g("data.out");
//global variables, arrays are initialised with 0
int AGlobalArray[100], n, x;

void SearchNum(int num) {
    if ( AGlobalArray[num]> 0 ) {
        cout << "Yes it exists " << AGlobalArray[num] << " times";
        g << num << " exists " << AGlobalArray[num] << " times" <<endl    ;
	} else {
        g<< "No it does not exist";
	}
}



int main()
{
	//read first line from file
	f >> n;
	for (int i=0; i<=n; i++) {
       int x;
       f>>x;
       //if negative numbers in data set,
       //x = x + n (n is no. of values in file)
       AGlobalArray[x] = AGlobalArray[x] + 1;
       //alternative is ++A[x]
	}

	cout << "Enter number to see if it exists in data set" << endl;
	cin >> x;
	SearchNum(x);

    return 0;
}

