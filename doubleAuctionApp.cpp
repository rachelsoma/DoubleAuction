#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"
#include "Auctioneer.h"
#include "Auctioneer.cpp"

using namespace std;

int main() {

  int numBids = 5;


  Seller sally("Sally"); //make seller object
  Seller *bidArray[numBids]; //make array
  Seller *arrPtr;


    for (int j=0; j<numBids; j++) {
arrPtr = new Seller("Sally");
      arrPtr->generateBid();
      bidArray[j] = arrPtr;
      arrPtr->print();
    }

      Buyer bill("Bill"); //make seller object
  Buyer *bidArrayBill[numBids]; //make array
  Buyer *arrPtrBill;


    for (int j=0; j<numBids; j++) {
arrPtrBill = new Buyer("Bill");
      arrPtrBill->generateBid();
      bidArrayBill[j] = arrPtrBill;
      arrPtrBill->print();
    }

//    sally.print(bidArray[i]);


  cout << "**********Print Array outside loop**********" << endl;

    for(int j=0; j < numBids; j++) {
      bidArray[j]->print();
      bidArrayBill[j]->print();
    }
//
//

if compareBids(bidArray,bidArrayBill) = 0; cout << "All bid types are the same" << endl;

// sally.print(bidArray[1]);
//  sally.print(bidArray[2]);

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
