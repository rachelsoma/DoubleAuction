#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"

using namespace std;

int main() {
  int numBids = 10;
  Seller sally("Sally");

  for(int i=1; i < numBids+1; i++) {
    Bid sallyBid = sally.generateBid();
     sally.print(sallyBid);
    //arrBids[i].print();
  }
    cout << endl;





//  Buyer w("Joe");
//  for (int i=0; i<5; i++) {
//    Bid joeBid = w.generateBid();
//    w.print(joeBid);
//  }
//  cout << endl;
//    Buyer s("Sue");
//  for (int i=0; i<5; i++) {
//   Bid sueBid = s.generateBid();
//   //s.print(myBid);
//  }
//  cout << endl;
//  Seller q("Jane");
//  for (int i=0; i<5; i++) {
//    Bid janeBid = q.generateBid();
//    q.print(janeBid);
//  }
//  cout << endl;
//   Seller d("Dan");
//  for (int i=0; i<5; i++) {
//    Bid myBid = d.generateBid();
//  }


  return 0;
}
