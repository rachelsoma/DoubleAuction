#include<iostream>
#include<string>
#include<vector>

using namespace std;

#include "Bid.h"
#include "Trader.h"
#include "Auctioneer.h"

int main() {


  Trader s;
  Bid t1 = s.generateBid();

  Auctioneer a;
  a.compareBids();
  a.writeToFile();
  return 0;
}
