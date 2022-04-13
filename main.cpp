#include <iostream>
#include <valarray>

std::string fun1(double x){
    std::string y;
    if (x < 0 || x == 1 || (x == M_PI/2)) {
        y = "Ne isnue";
    }else {
        y = std::to_string(tan(x) / log(x));
    }
    return y;
}

int main() {
    double a,b,h;
    std::cin>>a;
    std::cin>>b;
    std::cin>>h;
    int t = (b-a)/h;
    for (int i =0; i <= t; i++) {
        double x = a+i*h;
        std::cout<< " x = "<<x<< "; y = "<< fun1(x) << "\n" ;
    }
    return 0;
}
