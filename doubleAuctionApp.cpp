#include<iostream>
#include<string>
#include "bid.h"
#include "Trader.h"

using namespace std;

int main(){

bid a("Dongmo", 4, 'A', 21);
bid b("Jane", 26, 'B', 35);

a.print();
b.print();

Trader d("Dongmo", 's');
Buyer j("Jane");
Buyer("Jane");

d.Print();
j.Print();

return 0;
}
