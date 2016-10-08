
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

cout << "generating bid\n";

return Bid();
};

void Buyer::placeBid(){
generateBid();
bidType = 'a'; //a for asking

cout << bidType <<". "<< price << ". "<< quantity << ". " <<endl;

};
