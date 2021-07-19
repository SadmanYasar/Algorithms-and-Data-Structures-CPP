#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<long long> prime;
void simplesieve(long long n) {

    vector<long long> isprime(n + 1, 1);

    //isprime[0] = 0;
    //isprime[1] = 0;


    for( int i=2; i<=n; i++ ) {
        if(isprime[i] == 1) {
            prime.push_back(i);
            for(int j = 2; i*j<=n + 1; j++) {
                isprime[i*j] = 0;
            }
        }
    }


}





void segmentedsieve(int L, int H){
    //simple sieve to get primes upto sqrt(h)
    simplesieve(static_cast<int>(sqrt(H)));


    //create array of size ((H-L) + 1)
    //initialized to 1
    vector<long long> isPrime((H-L)+1, 1);

    for( long long p : prime ) {
        //long long base = (L/p) * p;
        long long base = p*p;
        if(base < L) {
            base = ((L+p-1)/p)*p;
        }

        for(long long i =base; i<= H; i+=p){
            isPrime[i-L] = 0;
        }

    }

    for(long long i = 0; i<= H-L; i++ ){
        if(isPrime[i]==1){
        cout<<L+i<<endl;
        }
    }

}


int main()
{
    int x =0;
    int y = 0;
    cin>>x;
    cin>>y;

    segmentedsieve(x,y);










    return 0;
}
