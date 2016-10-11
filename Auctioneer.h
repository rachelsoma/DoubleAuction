#ifndef AUCTIONEER_H
#define AUCTIONEER_H

#include<iostream>
#include<vector>
#include <fstream>

using namespace std;


const int numBids = 5;

class Auctioneer {

  vector<Bid> sellers;
  vector<Bid> buyers;

public:
  /** Default constructor */
  /** Default destructor */
  void collectBids();
  void compareBids();
  void printBids();
  void writeToFile();
protected:

private:
  double clearingPrice;
};

void Auctioneer::collectBids() {

  /** Generate bids */
  for (int i = 0; i <numBids; i++) {
    Seller j("Joe");
    Bid s1 = j.generateBid();
    sellers.push_back(s1);
    Seller s("Sue");
    Bid s2 = s.generateBid();
    sellers.push_back(s2);
  }

  for (int i = 0; i <numBids; i++) {
    Buyer k("Kate");
    Bid b1=k.generateBid();
    buyers.push_back(b1);
    Buyer b("Bill");
    Bid b2=b.generateBid();
    buyers.push_back(b2);
  }

}
/** Compare bids */
void Auctioneer::compareBids() {

  for ( int i=0; i<sellers.size(); ++i ) {
    for (int j=0; j<sellers.size(); ++j) {
      if( sellers[i].getPrice() < buyers[j].getPrice() && sellers[i].getQuantity() !=0 && buyers[j].getQuantity() !=0) {
        if (sellers[i].getQuantity() <= buyers[j].getQuantity()) {
          sellers[i].printBid();
          cout << "/ ";
          buyers[j].printBid();
          clearingPrice = (sellers[i].getPrice() + buyers[j].getPrice()) /2;
          cout << "Clearing price: " << clearingPrice << endl;

          //balancing quantities
          int sellQty = sellers[i].getQuantity();
          int buyQty = buyers[j].getQuantity();
          sellers[i].setQuantity(sellQty, buyQty);
          buyers[j].setQuantity(1,1);//sets qty to 0
        }
      } else {
        sellers[i].printBid();
        cout << "/ ";
        buyers[j].printBid();
        cout << "No Match" << endl;
      }
    }
  }
}

void Auctioneer::printBids() {

  cout << "Generated bids\n";
  for (int i = 0; i<sellers.size(); i++) {
    sellers[i].printBid();
    buyers[i].printBid();
  }
}

void Auctioneer::writeToFile() {

  myfile.open ("doubleAuctionOutput.txt");
  for ( int i=0; i<sellers.size(); ++i ) {
    for (int j=0; j<sellers.size(); ++j) {
      if( sellers[i].getPrice() < buyers[j].getPrice() ) {
        sellers[i].printBidToFile();
        myfile << "/ ";
        buyers[j].printBidToFile();
        clearingPrice = (sellers[i].getPrice() + buyers[j].getPrice()) /2;
        myfile << "Clearing price: " << clearingPrice << endl;
      } else {
        sellers[i].printBidToFile();
        myfile << "/ ";
        buyers[j].printBidToFile();
        myfile << "No Match" << endl;
      }
    }
  }

  myfile.close();

}


#endif // AUCTIONEER_H
