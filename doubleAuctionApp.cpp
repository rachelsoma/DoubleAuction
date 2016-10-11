#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"
#include "Auctioneer.h"
#include "Auctioneer.cpp"

using namespace std;

int main() {

Trader s;
Bid t1 = s.generateBid();

Seller j("Joe");
Bid s1 = j.generateBid();

Buyer k("Kate");
Bid b1=k.generateBid();



t1.printBid();
s1.printBid();
b1.printBid();

  return 0;
}
