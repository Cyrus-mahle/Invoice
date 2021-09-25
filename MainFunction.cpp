/*
* Author:Bongi 219....
* publisher : Bongi
* Description : print content of items Part number,
* Quantity,amount,price
* Date created 2021/09/22                              
* Due Date:2021/09/25
*
*/
#include<iostream>
#include<string>
#include"classINVOICE.h"
#include<iomanip>
using namespace std;

int main(){
	
	invoice item("12345","hummer",5.3,100.4,0);
	cout<<fixed<<showpoint<<setprecision(2)<<endl;
	cout<<"Description :"<<item.getPart_description()<<endl;
    cout<<"Part number :"<<item.getPart_num()<<endl;
    cout<<"Quantity    :"<<item.getQuantity()<<endl;
    cout<<"Price       :"<<" R"<<item.getPrice()<<endl;
    cout<<"Amount      :"<<" R"<<item.getAmount();
			
}
