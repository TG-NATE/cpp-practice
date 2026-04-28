#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double hyp;

    std::cout << "Enter A" << std::endl;
    std::cin >> a;

    std::cout << "Enter B" << std::endl;
    std::cin >> b;

    hyp = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The Hypoteuse is " << hyp << std::endl;

    return 0;
}