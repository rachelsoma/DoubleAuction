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
  void compareBids();
  void printBids();
  void writeToFile();
protected:

private:
  double clearingPrice;
};

void Auctioneer::compareBids() {

  /** Generate bids */
  for (int i = 0; i <numBids; i++) {
    Seller j("Joe");
    Bid s1 = j.generateBid();
    sellers.push_back(s1);
  }

  for (int i = 0; i <numBids; i++) {
    Buyer k("Kate");
    Bid b1=k.generateBid();
    buyers.push_back(b1);
  }

  /** Compare bids */


  for ( int i=0; i<sellers.size(); ++i ) {
    for (int j=0; j<sellers.size(); ++j) {
      if( sellers[i].getPrice() < buyers[j].getPrice() ) {
        sellers[i].printBid();
        cout << "/ ";
        buyers[j].printBid();
        clearingPrice = (sellers[i].getPrice() + buyers[j].getPrice()) /2;
        cout << "Clearing price: " << clearingPrice << endl;
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

void Auctioneer::writeToFile(){



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
