  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;

void Trader::print() {
  cout << "Trader ID:" << traderId << " Name:"<< traderName <<"."<<endl;
};

void Buyer::print() {
  cout << "Buyer ID:" << traderId << " Name:"<< traderName <<" Type: " << traderType <<endl;
};

void Seller::print() {
  cout << "Seller ID:" << traderId << " Name:"<< traderName <<" Type: " << traderType <<endl;
};


Bid Trader::generateBid() {
  int quantity = QUANTITY;
  int price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;
  bidType = 'u'; //u for unknown
  Bid t(traderName,_bidId, bidType, price, quantity);
  return t;
};

