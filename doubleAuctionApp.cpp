#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"

using namespace std;

int main() {


  Buyer w("Joe");
  for (int i=0; i<10; i++) {
    w.generateBid();
  }
  //w.printBid();
  Seller q("Jane");
  for (int i=0; i<10; i++) {
    q.generateBid();
  }


  return 0;
}
