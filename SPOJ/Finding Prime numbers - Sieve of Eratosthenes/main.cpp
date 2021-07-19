#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int noOfTestCases, minimum, maximum;
    cin>>noOfTestCases;

    for(int i=1; i<=noOfTestCases; i++) {
        cin>>minimum>>maximum;

    int n = maximum;

    int Primes[n + 1];

    //initialize array so that all elements are considered prime
    //1 means yes, 0 means no
    for(int i=0; i<=n; i++){
        Primes[i] = 1;
    }

    //0 and 1 are not primes
    Primes[0]=0;
    Primes[1]=0;

    for(int i=2; i<=sqrt(n); i++) {
        if(Primes[i] == 1){
            for(int j=2; i*j<=n; j++) {
                Primes[i*j] = 0;
            }
        }
    }

    for(int i = minimum; i<=maximum; i++) {
        if(Primes[i]==1) cout<<i<<endl;
    }

    cout<<""<<endl;

    }

    return 0;
}
