#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Product {
     double price;
     string name;
     Product() {
        price = 0;
        name = "p";

     }

};





int main()
{
    Product pdt1;
    Product pdt2;

    pdt1.name = "S";
    pdt2.name = "x";

    cout<< pdt1.name <<endl;
    cout<< pdt2.name <<endl;



    return 0;
}
