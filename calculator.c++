#include <iostream>
#include <cmath>
#include <limits>
int main()
{
    int v;
    double c, x;
    char a;

    std::string f;
    std::cout << "choose the operation (1-3)" << std::endl;
    std::cout << "1- for basic operations\n";
    std::cout << "2- for powering operation\n";
    std::cout << "3- for tri functions\n";
    std::cin >> v;
    if (v == 1)
    {
        std::cout << "enter the operation " << std::endl;
        std::cin >> c >> a >> x;

        switch (a)
        {
        case '+':
            std::cout << "the answer is = " << x + c;
            break;
        case '-':
            std::cout << "the answer is = " << c - x;
            break;
        case '*':
            std::cout << "the answer is = " << c * x;
            break;
        case '/':
            if (x != 0 and x != 0)
            {
                std::cout << c / x;
            }
            else if (x == 0 and c != 0)
            {
                std::cout << "undefined";
            }
            else
            {
                std::cout << "undeterminate";
            }
            break;
        default:
            std::cout << "you did some thing wrong";
        }
    }
    else if (v == 2)
    {
        std::cout << "enter the number then ^ then enter the power\n";
        std::cin >> x >> a >> c;
        std::cout << pow(x, c);
    }
    else if (v == 3)
    {
        std::cout << "enter one of these functions ( sin , cos , tan , csc , sec , cot) like  sin number\n";
        std::cin >> f >> x;
        const double pi = 3.14159265358979323846;
        x = x * (pi / 180);
        if (f == "sin")
        {
            std::cout << sin(x);
        }
        else if (f == "cos")
        {
            std::cout << cos(x);
        }
        else if (f == "tan")
        {
            std::cout << tan(x);
        }
        else if (f == "sec")
        {
            std::cout << 1 / cos(x);
        }
        else if (f == "csc")
        {
            std::cout << 1 / sin(x);
        }
        else if (f == "cot")
        {
            std::cout << 1 / tan(x);
        }
        else
        {
            std::cout << "you did something wrong";
        }
    }
    else
    {
        std::cout << "are you stupid ?! i said enter a number between (1-3) \n";
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
