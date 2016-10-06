void Buyer::print() {
  cout <<"Buyer ID: "<< traderId <<  " Name: " << traderName <<" is a " << traderType << endl;
};

void Seller::print() {
  cout <<"Seller ID: "<< traderId <<  " Name: " << traderName <<" " << traderType << endl;
};

void Trader::print() {
  cout <<"Trader ID: " << traderId << "Name: " << traderName << " is a " << traderType << endl;
};
