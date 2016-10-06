#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"

using namespace std;

int main() {

  for (int i=0; i<10; i++) {
    Seller w("Unknown");
    w.print();
    Buyer z("Unknown");
    z.print();
  }

  return 0;
}
