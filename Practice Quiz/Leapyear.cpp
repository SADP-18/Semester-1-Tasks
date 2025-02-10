#include <iostream>

int main(){
    int year;
    std::cin>>year;
    if(year % 4 == 0){
        std::cout<<"Leap Year\n";
    }
    else{
        std::cout<<"Normal Year\n";
    }
    return 0;
}
