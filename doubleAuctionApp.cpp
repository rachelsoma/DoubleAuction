#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"

using namespace std;

int main() {

  for (int i=0; i<2; i++) {
    Buyer w;
    w.print();
    generateBid();
    //w.printBid();


  }



  return 0;
}
