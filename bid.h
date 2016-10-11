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
  Bid(){};
  Bid (string traderName, int bidId, char bidType, double price, int quantity) {//constructor
    this->traderName;
    this->bidId;
    this->bidType;
    this->price;
    this->quantity;
  };

  void printBid();

protected:
};

void Bid::printBid() {
  cout << traderName << "/t" << bidId <<"/t " << quantity << " /t "<< price <<endl;
}

#endif // BID_H
