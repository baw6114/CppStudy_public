#include <iostream>

using namespace std;

class Display{
    private:
    int input = 0;

    public:
    int DataPrint(){
        
        std::cout << "**\n";
        std::cout << "1.name\n";
        std::cout << "2.phonenumber\n";
        std::cout << "3.address\n";
        std::cout << "4.birthday\n";
        std::cout << "**\n input want watch info : ";

        std::cin >> input;

        return input;
    };

};

int main(int argc, char const *argv[])
{
    int input = 0;

    Display display;

    input = display.DataPrint();

    std::cout << "Input : ";
    std::cout << input;

    return 0;
}