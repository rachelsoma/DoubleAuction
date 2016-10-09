#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"

using namespace std;

int main() {
  int numSellers = 2;
  int numBids = 5;
  int numBuyers = 2;

//  Seller sally("Sally"); //make seller object
  Seller *bidArray[numSellers][numBids]; //make array
  Seller *arrPtr;
  for(int i=0; i < numSellers; i++) {//fill array with Bid objects that are returned from generateBid
arrPtr = new Seller;
    for (int j=0; j<numBids; j++) {

//      bidArray[i][j] = arrPtr;
      arrPtr->generateBid();
     bidArray[i][j] = arrPtr;

      arrPtr->print();
    }
//    sally.print(bidArray[i]);
  }
  cout << "**********Print Array outside loop**********" << endl;
  for(int i=0; i < numSellers; i++) { //print sally array
    for(int j=0; j < numBids; j++) {
      bidArray[i][j]->print();
    }
  }


// sally.print(bidArray[1]);
  //sally.print(bidArray[2]);

//  //bill
//   Buyer bill("Bill");
//  Bid bidArray2[numBids];
//  for(int i=0; i < numBids; i++) {
//    bidArray[i] = bill.generateBid();
//  }
//  for(int i=0; i < numBids; i++) { //print sally array
//    bill.print(bidArray2[i]);
//  }


  /** Driver to test buyer and seller generateBid */
//    Buyer s("Sue");
//  for (int i=0; i<5; i++) {
//   Bid sueBid = s.generateBid();
//   //s.print(myBid);
//   Seller d("Dan");
//  for (int i=0; i<5; i++) {
//    Bid myBid = d.generateBid();
//  }


  return 0;
}
