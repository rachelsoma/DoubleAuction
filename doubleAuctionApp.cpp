#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"

using namespace std;

int main() {


  Buyer w("Joe");
  for (int i=0; i<5; i++) {
    w.generateBid();
  }
    Buyer s("Sue");
  for (int i=0; i<5; i++) {
    s.generateBid();
  }
  //w.printBid();
  Seller q("Jane");
  for (int i=0; i<5; i++) {
    q.generateBid();
  }
   Seller d("Dan");
  for (int i=0; i<5; i++) {
    d.generateBid();
  }


  return 0;
}
