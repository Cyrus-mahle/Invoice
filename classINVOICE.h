#include<iostream>
#include<string>
using namespace std;

class invoice{
	
	private:
	string part_num;
	string part_description;
	int price;
	int quantity;
	int amount;
	public:
	invoice();
	invoice(string,string,int,int,int);
	~invoice();
	void setPart_num(string);
	string getPart_num()const;
	void setPart_description(string);
	string getPart_description()const;
	void setPrice(int);
	int getPrice()const;
	void setQuantity(int);
	int getQuantity()const;
	void setAmount(int);
    int getAmount()const;
	
};
