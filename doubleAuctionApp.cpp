#include<iostream>
#include<string>
#include "bid.h"
#include "Trader.h"

using namespace std;

int main(){

//bid a("Dongmo", 4, 'A', 21);
//bid b("Jane", 26, 'B', 35);

//a.print();
//b.print();

Seller dongmo("Dongmo");
Buyer jane("Jane");
Seller rach("rach");


dongmo.print();
jane.print();
rach.print();

return 0;
}
