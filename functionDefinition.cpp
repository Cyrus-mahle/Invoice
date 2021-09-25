#include<iostream>
#include<string>
#include"classINVOICE.h"
using namespace std;

invoice::invoice(){
	
    part_num="";
	part_description="";
	price=0;
	quantity=0;
	amount=0;
}
invoice::invoice(string pnum,string partD,int P,int Q,int A){
	
	part_num=pnum;
	part_description=partD;
	
	if(price<0){
		
		price=0;
	}
	else{
	price=P;
    }
    if(quantity<0){
    	
    	quantity=0;
	}
	else{
			quantity=Q;
	}
    if(amount<0){
    	
    	amount=0;
    }
    else{
 	    amount=A;
    }
	
}

	void invoice::setPart_num(string pnum){
			part_num=pnum;
	}
	string invoice::getPart_num()const{
	      return part_num;
	}
	void invoice::setPart_description(string partD){
		part_description=partD;
		
	}
	string invoice::getPart_description()const{
	      return part_description;
	}
	void invoice::setPrice(int P){
	  if(price<0){
		
		price=0;
		
      	}
    else{
		
      	price=P;
	
        }
		
	}
	int invoice::getPrice()const{
	
	  return price;
	
	}
	void invoice::setQuantity(int Q){
	if(quantity<0){
    	
    	quantity=0;
	    }
	else{
			quantity=Q;
     	}
		
	}
	int invoice::getQuantity()const{
	      return quantity;
	}
	void invoice::setAmount(int A){
		
	if(amount<0){
    	
    	amount=0;
    }
    else{
 	    amount=A;
    }
		
	}
	int invoice::getAmount()const{
	
	    return getPrice()*getQuantity();	
	
	}
	
	



