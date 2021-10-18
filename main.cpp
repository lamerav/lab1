#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

int main()
{
    std::cout << "Hello user!" << std::endl;

    std::cout << "Task 1" << std::endl;

    int x;

    std::cout << "Enter value, please" << std::endl << "x = ";

    std::cin >> x;

    std::cout << std::showpos << pow(x, 6) - 5 * pow(x, 5) - 1 << std::endl;



    std::cout << "Task 2" << std::endl;

    int a, g;

    std::cout << "Enter value" << std::endl << "a = ";

    std::cin >> a;

    g = a + 2;

    std::cout << std::noshowpos << std::setprecision(ceil(log10(a + 1)) + 3) << abs(a)  + sqrt(a - 1) << std::endl;



    std::cout << "Task 3" << std::endl;

    bool k, l, m, n;

    std::cout << "Enter value" << std::endl << "k = ";

    std::cin >> k;

    std::cout << "Enter value" << std::endl << "l = ";

    std::cin >> l;

    std::cout << "Enter value" << std::endl << "m = ";

    std::cin >> m;

    std::cout << "Enter value" << std::endl << "n = ";

    std::cin >> n;

    std::cout << std::boolalpha <<(n && l || ( (m || (!k) && (!(m && (!k) ))) )) << std::endl;



    std::cout << "Task 4" << std::endl;

    int b;

    std::cout << "Enter value" << std::endl << "b = ";

    std::cin >> b;

    if ( (b > 7) && (b < 0) )
    {
        std::cout << "Invalid value, try numbers between [0,7]!" << std::endl;
    }
    else
    {
        std::cout << std::pow(b, 2) << std::endl;

        std::cout << std::oct << std::pow(b, 2) << std::endl;
    }



    std::cout << "Task 5" << std::endl;

    unsigned short int d, c, e, f;

    std::cout << "Enter value:" << std::endl << "d = ";

    std::cin >> d;

    std::cout << "Enter value:" << std::endl << "c = ";

    std::cin >> c;

    std::cout << "Enter value:" << std::endl << "e = ";

    std::cin >> e;

    std::cout << "Enter value:" << std::endl << "f = ";

    std::cin >> f;

    std::cout << std::internal << std::hex << std::showbase << std::setw(6) << std::setfill('0') << ( ((~d)|c) & e ^ f ) << std::endl;

}
