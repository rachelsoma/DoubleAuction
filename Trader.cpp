
void Buyer::print() {
  cout << "Trader ID:" << traderId << " placed Bid "<< bidId <<". wants to buy " << quantity << " at "<< price <<endl;
};

void Seller::print() {
   cout << "Trader ID:" << traderId << " placed Bid "<< bidId <<". wants to sell " << quantity << " at "<< price <<endl;
};

void Seller::print(Bid) {
   cout << "Trader ID:" << traderId << " placed Bid "<< bidId <<". wants to sell " << quantity << " at "<< price <<endl;
};

Bid Trader::generateBid() {
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  quantity = QUANTITY;
  price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;

  return Bid();
};

Bid Buyer::generateBid() {
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  quantity = QUANTITY;
  traderName;
  traderId;
  traderType;
  bidId=_bidId;
  bidType = 'b'; //b for buying

  price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;

  _bidId++;
//cout << "Trader ID:" << traderId << " placed Bid "<< bidId <<". wants to buy " << quantity << " at "<< price <<endl;
  return Bid();
};

Bid Seller::generateBid() {
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  quantity = QUANTITY;
  traderName;
  traderId;
  traderType;
  bidId = _bidId;
  bidType = 's'; //b for buying

  price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;

  _bidId++;
//cout << "Trader ID:" << traderId << " placed Bid "<< bidId <<". wants to sell " << quantity << " at "<< price <<endl;
  return Bid();
};
