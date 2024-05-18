#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage example: ./rpn \"8 9 * 9 - 9 - 9 - 4 - 1 +\"" << std::endl;
        return 1;
    }
    else {
        try {
            RPN rpn(argv[1]);
            std::cout << rpn.calculate() << std::endl;
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}