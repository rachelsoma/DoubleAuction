
void Buyer::print() {
  cout <<"Buyer ID: "<< traderId <<  " Name: " << traderName <<" is a " << traderType << endl;
};

void Seller::print() {
  cout <<"Seller ID: "<< traderId <<  " Name: " << traderName <<"is a  " << traderType << endl;
};

Bid generateBid() {
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  int quantity = QUANTITY;


  double price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;

cout << "generating bid " << price << " " << quantity << endl;

return Bid();
};

void Buyer::placeBid(){

};
Bid Buyer::generateBid(){
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  int quantity = QUANTITY;
  traderName;
  traderId;
  traderType;
  bidId;
  bidType = 'b'; //b for buying

  double price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;

bidId++;


cout << traderName << traderId << traderType << " wants to buy " << bidId <<" - " << quantity << " at "<< price <<endl;
return Bid();
};

Bid Seller::generateBid(){
  double const MINPRICE = 20;
  double const MAXPRICE = 100;
  int const QUANTITY = 1;
  int quantity = QUANTITY;
  traderName;
  traderId;
  traderType;
  bidId;
  bidType = 's'; //b for selling

  double price = MAXPRICE * ((rand() + 1) / double(RAND_MAX + 2)) + MINPRICE;
  price = floor(price*100+0.5)/100;

bidId++;


cout << traderName << traderId << traderType << " wants to sell " << bidId <<" for " << quantity << " at "<< price <<endl;
return Bid();
};
