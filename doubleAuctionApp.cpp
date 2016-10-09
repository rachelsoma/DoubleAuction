#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"

using namespace std;

int main() {
  int numBids = 5;
  Seller arrBids[numBids];

  for(int i=0; i < numBids; i++) {
    Bid newBid = arrBids[i].generateBid();
    //arrBids[i].print();
  }
    cout << endl << endl;

  for(int i=0; i < numBids; i++) {
    arrBids[i].print();
  }


//
//  for (int i = 0; i < numBids; i++)
//    print(newBid)
//    arrBids[i].print(newBid);

  //  cout << print(arrBids[1]);

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
