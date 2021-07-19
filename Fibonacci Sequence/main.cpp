#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//its a sequence of numbers seen in nature
//nubmbers are 0,1,1,2,3,5,8,13,21,34,55,89....

//**problem**//
//Given a number N, find how many ways
//the number can be represented as sums of
//1 and 2
//Note that 1+2 is different than 2+1

//**example**//
//4 = 1 + (s=3)
//4 = 2 + (s=2)

//**solution**//
//let dp[N] be no. of ways to write number
//N as sums of 1 and 2
//dp[N] = dp[N-1] + dp[N-2]
//applicable except N = 1 and N = 2
//dp[1] = dp[0] + dp[-1] = 1
//dp[2] = dp[1] + dp[0] = 2

int main()
{


    return 0;
}
