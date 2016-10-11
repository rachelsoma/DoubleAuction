#include "Auctioneer.h"

using namespace std;
//Auctioneer::Auctioneer()
//{
//  //ctor
//  cout << "Construct Auctioneer " << endl;
//}
//
//Auctioneer::~Auctioneer()
//{
//  //dtor
//  cout << "Destruct Auctioneer " << endl;
//}

void Auctioneer::compareBids(vector<Bid> buyers,vector<Bid> sellers) {
  cout << "Compare bids\n";
  for (int i = 0; i<sellers.size(); i++) {
    sellers[i].printBid();
    buyers[i].printBid();
  }
}

};
