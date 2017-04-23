#include <iostream>
# include <cmath>

int factorial(int x){
        
        

        if(x<=1){
            
            return 1;
        }
        else{
            
            return factorial(x-1)*x;
        }
}


 double binomial(int n, int k){
    

    if(k==0 || n==k){
        return -1;
    }
    else{
        return factorial(n)/(factorial(k)*(factorial (n-k)));
    }
    }

 double mileToKilometer(){
        double mile;
        std::cout<<"Geben Sie die Meilen an!\n";
        std::cin >> mile;
        double kilometer;

        kilometer = mile * 1.6 ;
        std::cout << "Kilometer sind " << kilometer << std::endl;
        return kilometer;
    }

bool is_prime(){
        int x;
        std::cout<<"Geben Sie eine ganze Zahl ein!\n";
        std::cin >> x;
        int i=2;

        while (i<x){
            if(x % i == 0){
                std::cout << "Zahl ist nicht prim!\n ";
                return false;
            }
            else{
                ++i;
            }
        std::cout << "Zahl ist prim!\n ";
        return true;
        }
    }




    double surface(){
        double radius;
        double hight;
        std::cout<<"Geben Sie den Radius an!\n";
        std::cin >> radius;
        std::cout<<"Geben Sie die Höhe an!\n";
        std::cin >> hight;
        double surface;

        surface = 2 * M_PI * radius + (radius + hight);

        std::cout << "Oberfläche betraegt " << surface << std::endl;
     return surface;
    }

    double capacity(){
        double radius;
        double hight;
        std::cout<<"Geben Sie den Radius an!\n";
        std::cin >> radius;
        std::cout<<"Geben Sie die Höhe an!\n";
        std::cin >> hight;
        double capacity;

        capacity = M_PI * pow(radius,2) * hight;

        std::cout << "Volumen betraegt " << capacity << std::endl;
     return capacity;
    }


int checksum (){
        int a;
        std::cout << "Geben Sie eine Zahl ein!\n "; 
        std::cin >> a;
        int checksum=0;
        

       while (a>0){
           checksum += a%10;
           a/=10;
       }   
           

        
        std::cout <<" Quersumme ist " << checksum << std::endl;
        return checksum;

    }

int gcd(){
    int p;
    std::cout<<"Geben sie eine ganze Zahl ein!\n";
    std::cin >> p ;
    int q;
    std::cout<<"Geben sie eine ganze Zahl ein!\n";
    std::cin >> q ;
    int r = 0;

    while (q != 0){
        r= p % q;
        p = q;
        q = r;

    }
    std::cout << "Der ggT ist " << p << std::endl;
}

long int aufgabe1_10()
{
 long int sumMultiples = 0;
 long int x=0;

 while (x<=1000)  {
     if(x % 3 ==0 || x % 5 == 0){
         sumMultiples += x;
         
     }
     ++x;
 } 
 std::cout << "Zahl ist " << sumMultiples << std::endl;
     return sumMultiples;
}



long int aufgabe1_3()
{
    long int zahl = 20;
    long int x=1;

    while(x<=20) {
     if(zahl % x != 0) {
         zahl += 20; // zahl = zahl + 20;
         x=0;
     }
     ++x;
     }   
     std::cout << "Zahl ist " << zahl << std::endl;
     return zahl;
}

int main()
{
  std::cout << "Hello, World!\n";
  aufgabe1_3();
  aufgabe1_10();
  checksum();
  gcd();
  capacity();
  surface();
  is_prime();

   std::cout<<"Geben sie eine ganze Zahl ein!\n";
    int x;
    std::cin >> x;
    if(x<=0){
        std::cout<<"X muss größer 0 sein\n";
    }
    else{
    
        std::cout<<"Die Zahl ist"<< factorial(x)<<std::endl;
    } 
    std::cout<<"Geben sie eine n und k ein!\n" ;  
    int n;
    int k;
    std::cin >> n >> k;
    
    if(n<k){
        std::cout<<"n muss größer k sein!";
    }
    else{
        std::cout << "Binomialkoeffizient ist " << binomial << std::endl;
 
    }
    

  return 0;

}
