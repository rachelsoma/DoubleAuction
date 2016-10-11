#ifndef TRADER_H
#define TRADER_H
#include<string>
#include<cmath>

using namespace std;

class Trader {
protected:
  string traderName;
  int traderId;
  char traderType;
  char bidType;

public:
  static int _traderId;
  static int _bidId;

  /** Default constructor */
  Trader() {
    traderName="Unknown";
    traderId = _traderId;
    _traderId++;
  }
  /** Name only constructor */
  Trader(string inTrader) {
    traderName=inTrader;
    traderId = _traderId;
    _traderId++;
  }

  void print();
  double randPrice();
  Bid generateBid();
//    virtual ~Trader();

};

int Trader::_traderId = 1;
int Trader::_bidId = 1;


/**
 * Buyer class
 */

class Buyer : public Trader {
public:

  /** Default constructor */
  Buyer() {
    traderName="Unknown";
    traderType='b';
    traderId = _traderId;
    _traderId++;
  }
  /** Name only constructor */
  Buyer (string inTrader) {
    traderName=inTrader;
    traderType='b';
    traderId = _traderId;
    _traderId++;
  }

  /** Default destructor */
  virtual ~Buyer() {};

  void print();
  Bid generateBid();

private:
  char traderType;
  char bidType;
};

/**
 * New child class for Sellers
 */

class Seller : public Trader {

public:
  /** Default constructor */
  Seller() {
    traderName="Unknown";
    traderType='s';
    traderId = _traderId;
    _traderId++;
  }
  /** Name only constructor */
  Seller (string inTrader) {
    traderName=inTrader;
    traderType='s';
    traderId = _traderId;
    _traderId++;
  }

  /** Default destructor */
  virtual ~Seller() {};

  void print();
  void print(Bid);

  Bid generateBid();

private:
  string traderName;
  char traderType;
  int traderId;
  char bidType;

};

double const MINPRICE = 20;
double const MAXPRICE = 100;
int const QUANTITY = 1;


void Trader::print() {
  cout << "Trader ID:" << traderId << " Name:"<< traderName <<"."<<endl;
};

void Buyer::print() {
  cout << "Buyer ID:" << traderId << " Name:"<< traderName <<" Type: " << traderType <<endl;
};

void Seller::print() {
  cout << "Seller ID:" << traderId << " Name:"<< traderName <<" Type: " << traderType <<endl;
};

double Trader::randPrice() {
  double price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;
  return price;
};

Bid Trader::generateBid() {
  int quantity = QUANTITY;
  double price = randPrice();
  bidType = 'u'; //u for unknown
  int bidId = _bidId;
  Bid t(traderName,bidId, bidType, price, quantity);
  _bidId++;
  return t;
};

Bid Seller::generateBid() {
  int quantity = QUANTITY;
  double price =randPrice();
  bidType = 's'; //s for sell
  int bidId = _bidId;
  Bid s(traderName,bidId, bidType, price, quantity);
  _bidId++;
  return s;
};

Bid Buyer::generateBid() {
  int quantity = QUANTITY;
  double price=randPrice();
  bidType = 'b'; //b for buy
  int bidId = _bidId;
  Bid b(traderName,bidId, bidType, price, quantity);
  _bidId++;
  return b;
}


#endif // TRADER_H
