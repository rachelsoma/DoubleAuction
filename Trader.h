#ifndef TRADER_H
#define TRADER_H
#include<string>


using namespace std;

class Trader {
private:
  string traderName;
  char traderType;
  double randBid;
  int traderId;

public:

  static int id;
  static int bidId;

  /** Default constructor */
  Trader(string inTrader, char inType) {
    traderName=inTrader;
    traderType=inType;
    traderId = id;
    id++;
  }

  void Print();
//    virtual ~Trader();
  double generateBid();

//protected:
};

int Trader::id = 0;
int Trader::bidId = 0;

void Trader::Print() {
  cout << traderId <<  " is a " << traderType << endl;
}


class Buyer : public Trader {
public:
  /** Default constructor */

  Buyer() {
    traderName=inTrader;
    traderType='b';
    traderId = id;
    id++;
  }

  /** Default destructor */
  virtual ~Buyer() {}



protected:

  char bidType = 'B'; //!< Member variable "bidType"
};
#endif // TRADER_H
