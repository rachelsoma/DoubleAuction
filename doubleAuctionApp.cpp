#include<iostream>
#include<string>
#include "Bid.h"
#include "Trader.h"
#include "Trader.cpp"

using namespace std;

int main() {
  int numBids = 5;

  Seller sally("Sally"); //make seller object
  Bid bidArray[numBids]; //make array
  for(int i=0; i < numBids; i++) {
    bidArray[i] = sally.generateBid(); //fill array with Bid objects that are returned from generateBid
    sally.print(bidArray[i]);
  }

  for(int i=0; i < numBids; i++) { //print sally array
    //sally.print(bidArray[i]);
  }

  sally.print(bidArray[0]);
  sally.print(bidArray[1]);
  sally.print(bidArray[2]);

  //bill
   Buyer bill("Bill");
  Bid bidArray2[numBids];
  for(int i=0; i < numBids; i++) {
    bidArray[i] = bill.generateBid();
  }
  for(int i=0; i < numBids; i++) { //print sally array
    bill.print(bidArray2[i]);
  }


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
