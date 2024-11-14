#include <iostream>
int getOddNumber(const std::string cardNumber){
    int total = 0 ;
    for(int i = cardNumber.size()-1; i>=0; i-=2){
        total += cardNumber[i] - '0' ;
    }
    return total ;
}

int getEvenNumber(const std::string cardNumber){
    int total = 0 ;
    for(int i = cardNumber.size()-2 ; i>=0; i-=2){
        int doubled = (cardNumber[i]-'0') * 2 ;
        if(doubled > 9){
            total += doubled % 10 + doubled / 10 ;
        }
        else{
            total += doubled;
        }
        
    }
    return total ;
}

int main(){
    int result = 0 ;
    std::string cardNumber ;
    std::cout << "***** Welcome *****\n";
    std::cout << "Enter your card : ";
    std::cin >> cardNumber ;

    result += getOddNumber(cardNumber) + getEvenNumber(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid.";
    }
    else{
        std::cout << cardNumber << " is not valid.";
    }
    return 0 ;
}