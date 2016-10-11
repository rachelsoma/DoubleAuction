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

double Trader::randPrice(){
  double price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;
  return price;
};

Bid Trader::generateBid() {
  int quantity = QUANTITY;
  double price = randPrice();
  bidType = 'u'; //u for unknown
  Bid t(traderName,_bidId, bidType, price, quantity);
  return t;
};

Bid Seller::generateBid(){
int quantity = QUANTITY;
double price =randPrice();
bidType = 's'; //s for sell
Bid s(traderName,_bidId, bidType, price, quantity);
return s;
};

Bid Buyer::generateBid(){
int quantity = QUANTITY;
double price=randPrice();
bidType = 'b'; //b for buy
Bid b(traderName,_bidId, bidType, price, quantity);
return b;
}


