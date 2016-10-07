#ifndef TRADER_H
#define TRADER_H
#include<string>


using namespace std;

class Trader {
protected:
  string traderName;
  int traderId;

public:
  static int id;
  static int bidId;

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
int Trader::bidId = 0;


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

private:
  char traderType;
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
  virtual ~Seller() {}

  void print();

  void printBid();

private:
  string traderName;
  char traderType;
  int traderId;
  char bidType;

};

#endif // TRADER_H
