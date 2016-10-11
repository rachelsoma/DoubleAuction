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

#endif // TRADER_H
