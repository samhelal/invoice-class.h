/*3.10 ( Invoice Class) Create a class called
Invoice that a hardware store might use to represent an invoice for an item
sold at the store. An Invoice should include four data members —a part number (type
string ), a part description (type a quantity of the item being purchased (type int )
string ), and a priceper item (type int ). Your class should have a constructor that
initializes the four data members. Provide a set and a get function for each data member.
 In addition, provide a member function named getInvoiceAmount that calculates the invoice
amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int value. If the quantity is not
positive, it should be set to 0 . If the price per item is not positive, it should be set to 0 . Write a test program that
demonstrates class Invoice ’s capabilities.(c++ how to program)*/
// invoice calss 
#include <string>

class invoice {
    public :
    invoice (std::string partNumber,std::string partDescription,int itemQuantity,int itemPrice)
    : pNum ( partNumber) {
      pDesc =partDescription ;
      if (itemQuantity>=0){
      itemQ = itemQuantity ;
      }
      if (itemQuantity <0){ //If the quantity is not positive, it should be set to 0 .
          itemQ = 0 ;
      }
      if(itemPrice>=0 ){ 
      itemP = itemPrice ;
      }
      if(itemPrice<0 ){ //If the price per item is not positive, it should be set to 0 .
      itemP = 0 ;
      }

    }
    void setPartNumber(std::string partNum){
        pNum = partNum ;
    }
    void setPartDescription(std::string partDesc){
        pDesc = partDesc ;
    }
    void setItemQuantity (int itemQua){
        if (itemQua >=0){
            itemQ = itemQua ;
        }
        if(itemQua<0){
            itemQ=0 ; //If the quantity is not positive, it should be set to 0 .
        }
    }
    void setItemPrice (int itemPrice) {
        if(itemPrice >=0){
        itemP = itemPrice ;
        }
        if(itemPrice<0){
            itemP =0 ;  //If the quantity is not positive, it should be set to 0 .
        }
    }
    std::string getPartNumber() const {
        return pNum ;
    }
    std::string partDescription () const {
        return pDesc ;
    }
    int getItemQuantity() const {
        return itemQ ;
    }
    int getItemprice() const {
        return itemP ;
    }
    int getInvoiceAmount() const {
        int total = itemQ * itemP ;
        return total ; 
    }

    
    private :
    std::string pNum ;
    std::string pDesc ;
    int itemQ {0} ;
    int itemP {0} ; 
};