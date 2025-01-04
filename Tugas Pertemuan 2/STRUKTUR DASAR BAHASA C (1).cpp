#include <iostream>
#include <cmath>
int main()
{
        double a;
        double b;
        double c;
        std::cout << "Masukan sisi alas A: ";
        std::cin >> a;
        std::cout << "Masukan sisi tinggi b: ";
        std::cin >> b;
        a = pow(a, 2);
        b = pow(b, 2);
        c = sqrt(a + b);
        std::cout << "side c: " << c;
        return 0;
    }
