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
  int quantity;
  double price;
  int bidId;

public:
  static int id;
  static int _bidId;

  /** Default constructor */
  Trader() {
    traderName="Unknown";
    traderId = id;
    id++;
  }
  /** Name only constructor */
  Trader(string inTrader) {
    traderName=inTrader;
    traderId = id;
    id++;
  }

  void print();
  Bid generateBid();


//    virtual ~Trader();

};

int Trader::id = 0;
int Trader::_bidId = 0;


/**
 * Buyer class
 */

class Buyer : public Trader {
public:

  /** Default constructor */
  Buyer() {
    traderName="Unknown";
    traderType='b';
    traderId = id;

  }
  /** Name only constructor */
  Buyer (string inTrader) {
    traderName=inTrader;
    traderType='b';
    traderId = id;

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
    traderId = id;
  }
  /** Name only constructor */
  Seller (string inTrader) {
    traderName=inTrader;
    traderType='s';
    traderId = id;
  }

  /** Default destructor */
  virtual ~Seller() {};

  void print();


  Bid generateBid();

private:
  string traderName;
  char traderType;
  int traderId;
  char bidType;

};

#endif // TRADER_H
