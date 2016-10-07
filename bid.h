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

 Bid () {//constructor
    generateBid();
    price=randBid;
    quantity=1;
  }
  void print();
  double generateBid();
  double randBid;
protected:
};

void Bid::print() {
}

double Bid::generateBid() {
  double const MINPRICE = 1;
  double const MAXPRICE = 99.99;
//int const QUANTITY = 1;

  randBid = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;

  return randBid;
}
#endif // BID_H
