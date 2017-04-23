#include <iostream>




    double mileToKilometer(){
        double mile;
        std::cout<<"Geben Sie die Meilen an!\n";
        std::cin >> mile;
        double kilometer;

        kilometer = mile * 1.6 ;
        std::cout << "Kilometer sind " << kilometer << std::endl;
        return kilometer;
    }




int main (){
    mileToKilometer();
    return 0;
}