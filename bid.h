#ifndef BID_H
#define BID_H
#include<iostream>
#include <fstream>
#include<string>
#include<cstdlib>

using namespace std;
ofstream myfile;

class Bid {
private:
  string traderName;
  int bidId;
  char bidType;
  double price;
  int quantity;

public:
  Bid (string traderName, int bidId, char bidType, double price, int quantity) {//constructor
    this->traderName=traderName;
    this->bidId=bidId;
    this->bidType=bidType;
    this->price=price;
    this->quantity=quantity;
  };

  void printBid();
  void printBidToFile();
  double getPrice();
  string getName();
  int getBidId();
  int getQuantity();
};

void Bid::printBid() {
  cout << traderName << ", " << bidId <<", " << bidType << ", "<< price << ", " << quantity << " ";
}

void Bid::printBidToFile(){
myfile << traderName << ", " << bidId <<", " << bidType << ", "<< price << ", " << quantity << " ";
}

double Bid::getPrice() {
  return price;
}

string Bid::getName() {
  return traderName;
}

int Bid:: getBidId() {
  return bidId;
}

int Bid::getQuantity() {
  return quantity;
}

#endif // BID_H
