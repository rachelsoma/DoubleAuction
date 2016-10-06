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
  Bid (string inName, int id, char inType, int inQty) {//constructor
    generateBid();
    traderName=inName;
    bidId=id;
    bidType=inType;
    price=randBid;
    quantity;
  }
  void print();
  double generateBid();
  double randBid;
protected:
};

void Bid::print() {
  cout << traderName << " " << bidId << " " << bidType << " " << price << endl;
}

double Bid::generateBid() {
  double const MINPRICE = 1;
  double const MAXPRICE = 99.99;
//int const QUANTITY = 1;

  randBid = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;

  return randBid;
}
#endif // BID_H
