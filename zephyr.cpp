#include <iostream>
#include <string>
#include <unordered_map>

class product {
    private:
    std::string productName;
    int price; 
    int stockQuant;
    public:
    product(std::string name,int productPrice,int stock){
        productName = name;
        price = productPrice;
        stockQuant = stock;
    }
    void setPrice(int p){
        price = p;
    }
    void setStock(int s){
        stockQuant = s;
    }
};