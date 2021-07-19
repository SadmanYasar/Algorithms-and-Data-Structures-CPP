#include <iostream>

using namespace std;

int main()
{
    int primes[h + 1];

    for(int i=0; i<=sizeof(primes)/sizeof(int); i++){
        primes[i] = 1;
    }

    primes[0] = 0;
    primes[1] = 0;


    for( int i=2; i<=sqrt(h); i++ ) {
        if(primes[i] == 1) {
            for(int j = 2; i*j<=h; j++) {
                primes[i*j] = 0;
            }
        }
    }
    return 0;
}
