#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n = 0;
    bool prime = false;

    cin>>n;

    for( int i = 2; i<= sqrt(n); i++ ) {
        //checks if remainder is 0
        if((n % i) == 0 ) {
            //number is not prime
            cout<<"Not prime"<<endl;
            prime = false;
            break;
        } else prime = true;
    }

    if(prime==true) cout<<"Yes its a prime"<<endl;

    return 0;
}
