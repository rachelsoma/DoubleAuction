#ifndef TRADER_H
#define TRADER_H
#include<string>


using namespace std;

class Trader {
private:
  string traderName;
  char traderType;
  int traderId;

public:

  static int id;
  static int bidId;

  /** Default constructor */
  Trader() {id++;}
  Trader(string inTrader) {traderName=inTrader; id++;}
  Trader(string inTrader, char inType) {
    traderName=inTrader;
    traderType=inType;
    traderId = id;
    id++;
  }

  virtual void print();
//    virtual ~Trader();

protected:
};

int Trader::id = 0;
int Trader::bidId = 0;

class Buyer : public Trader {
public:

  /** Default constructor */
  Buyer();
  Buyer(string inTrader) {
    traderName=inTrader;
    traderType='b';
    traderId = id;

  }

  /** Default destructor */
  virtual ~Buyer() {};

  void print();

private:
  string traderName;
  char traderType;
  int traderId;

  char bidType = 'B'; //!< Member variable "bidType"
};

/** New child class for Sellers */

class Seller : public Trader {

public:
  /** Default constructor */
  Seller(string inTrader) {
    traderName=inTrader;
    traderType='s';
    traderId = id;

  }

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
