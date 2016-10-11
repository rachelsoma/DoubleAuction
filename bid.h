#ifndef BID_H
#define BID_H
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

class Bid {
private:
  string traderName;
  int bidId;
  char bidType;
  double price;
  int quantity;

public:
  Bid (string traderName, int bidId, char bidType, double price, int quantity) {//constructor
    this->traderName=traderName;
    this->bidId=bidId;
    this->bidType=bidType;
    this->price=price;
    this->quantity=quantity;
  };

  void printBid();
};

void Bid::printBid() {
  cout << "printBid: Name" << traderName << "\t ID:" << bidId <<" \tQty:" << quantity << " \tprice: "<< price << "\ttype " << bidType << endl;
}

#endif // BID_H
