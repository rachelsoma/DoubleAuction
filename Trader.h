#ifndef TRADER_H
#define TRADER_H
#include<string>


using namespace std;

class Trader {
private:
  string traderName;
  int traderId;

public:

  static int id;
  static int bidId;

  /** Default constructor */
  Trader() {
    traderName="Unknown";
    traderId = id;
    id++;}
    /** Name only constructor */
  Trader(string inTrader) {
  traderName=inTrader;
  traderId = id;
  id++;}

  virtual void print();

//    virtual ~Trader();

protected:
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
    id++;
  }
  /** Name only constructor */
  Buyer (string inTrader) {
  traderName=inTrader;
  traderType='b';
  traderId = id;
  id++;}

  /** Default destructor */
  virtual ~Buyer() {};

  void print();

private:
};

/**
 * New child class for Sellers
 */

class Seller : private Trader {

public:
  /** Default constructor */
  Seller() {
    traderName="Unknown";
    traderType='s';
    traderId = id;
    id++;
  }
  /** Name only constructor */
  Seller (string inTrader) {
  traderName=inTrader;
  traderType='s';
  traderId = id;
  id++;}

  /** Default destructor */
  virtual ~Seller() {}

  void print();

private:
  string traderName;
  char traderType;
  int traderId;

  char bidType = 'B';
};

#endif // TRADER_H
