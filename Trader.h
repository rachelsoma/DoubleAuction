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
  Trader(){id++;}
  Trader(string inTrader){traderName=inTrader;id++;}
  Trader(string inTrader, char inType) {
    traderName=inTrader;
    traderType=inType;
    traderId = id;
    id++;
  }

  void print();
//    virtual ~Trader();
  double generateBid();

//protected:
};

int Trader::id = 0;
int Trader::bidId = 0;

void Trader::print() {
  cout << traderId <<  " is a " << traderType << endl;
}


class Buyer : public Trader {
public:


  /** Default constructor */
  Buyer(string inTrader) {
    traderName=inTrader;
    traderType='b';
    traderId = id;
    id++;
  }

  /** Default destructor */
  virtual ~Buyer() {}

void print();

private:
  string traderName;
  char traderType;
  int traderId;

  char bidType = 'B'; //!< Member variable "bidType"
};

void Buyer::print() {
  cout <<"Buyer ID: "<< traderId <<  " is a " << traderType << endl;
};

/** New child class for Sellers */

class Seller : public Trader {



public:
  /** Default constructor */
  Seller(string inTrader) {
    traderName=inTrader;
    traderType='s';
    traderId = id;
    id++;
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

void Seller::print() {
  cout <<"Seller ID: "<< traderId <<  " Name:" << traderName <<" " << traderType << endl;
}

#endif // TRADER_H
