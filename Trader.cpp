
void Buyer::print() {
  cout << "Trader ID:" << traderId << " Name:"<< traderName <<"."<<endl;
};

void Buyer::print(Bid) {
 cout << "Buyer ID:" << traderId << " Name:"<< traderName <<" Type: " << traderType <<endl;
};

void Seller::print() {
   cout << "Seller ID:" << traderId << " Name:"<< traderName <<" Type: " << traderType <<endl;
};

void Seller::print(Bid) {
//   cout << "Trader ID:" << traderId << " placed Bid "<< bidId <<". wants to sell " << quantity << " at "<< price <<endl;
};

Bid Trader::generateBid() {
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  int quantity = QUANTITY;
  int price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;
  Bid b(price, quantity);
  return b;
};

Bid Buyer::generateBid() {
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  int quantity = QUANTITY;
  traderName;
  traderId;
  traderType;
  int bidId=_bidId;
  bidType = 'b'; //b for buying

  double price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;

  _bidId++;
  Bid b(price, quantity);
  return b;
//cout << "Trader ID:" << traderId << " placed Bid "<< bidId <<". wants to buy " << quantity << " at "<< price <<endl;
  return Bid();
};

Bid Seller::generateBid() {
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  int quantity = QUANTITY;
  traderName;
  traderId;
  traderType;
  int bidId = _bidId;
  bidType = 's'; //b for buying

  double price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;

  _bidId++;
//cout << "Trader ID:" << traderId << " placed Bid "<< bidId <<". wants to sell " << quantity << " at "<< price <<endl;
  Bid b(price, quantity);
  return b;
};
