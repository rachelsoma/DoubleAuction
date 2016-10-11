#include<iostream>
#include<string>
#include<vector>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"
#include "Auctioneer.h"
#include "Auctioneer.cpp"

using namespace std;

int main() {

//Trader s;
//Bid t1 = s.generateBid();

int numBids = 5;

vector<Bid> sellers;
for (int i = 0; i <numBids; i++){
Seller j("Joe");
Bid s1 = j.generateBid();
sellers.push_back(s1);
}

vector<Bid> buyers;
for (int i = 0; i <numBids; i++){
Buyer k("Kate");
Bid b1=k.generateBid();
buyers.push_back(b1);
}


//for (int i = 0; i<sellers.size();i++){
//sellers[i].printBid();
//buyers[i].printBid();
//}

Auctioneer a;
a.compareBids(buyers,sellers);
  return 0;
}
