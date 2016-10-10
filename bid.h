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

//double const MINPRICE = 20;
//double const MAXPRICE = 100;
//int const QUANTITY = 1;

public:

 Bid () {//constructor

  };
   Bid (int, int) {//constructor

  };
  void printBid();

protected:
};

void Bid::printBid() {
   cout << bidId <<". wants to buy " << quantity << " at "<< price <<endl;
}

#endif // BID_H
