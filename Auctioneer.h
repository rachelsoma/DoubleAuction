#ifndef AUCTIONEER_H
#define AUCTIONEER_H

#include<iostream>
#include<vector>

using namespace std;


class Auctioneer
{
  public:
    /** Default constructor */
    Auctioneer();
    /** Default destructor */
    ~Auctioneer();
    void compareBids(vector<Bid>,vector<Bid>);
  protected:

  private:
};

#endif // AUCTIONEER_H
