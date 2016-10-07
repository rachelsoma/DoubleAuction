#ifndef BID_H
#define BID_H
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

class Bid {
private:
  double price;
  int quantity;


public:

 Bid () {//constructor
   double const MINPRICE = 20;
  double const MAXPRICE = 100;
//int const QUANTITY = 1;

  price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
    quantity=1;
  }
  void printBid();
  double generateBid();
protected:
};

void Bid::printBid() {
  cout << "Bid is " << price <<endl;
}

double Bid::generateBid() {
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
//int const QUANTITY = 1;

  price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  return price;
}
#endif // BID_H
