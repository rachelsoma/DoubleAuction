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
s.generateBid().printBid();

Trader j("Joe");
j.generateBid().printBid();
  return 0;
}
