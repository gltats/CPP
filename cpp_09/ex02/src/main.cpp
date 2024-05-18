#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: ./PmergeMe \"sequence\"" << std::endl;
        return 1;
    }

    try {
        std::string input;
        for (int i = 1; i < argc; ++i) {
            input += argv[i];
            if (i < argc - 1) {
                input += " ";
            }
        }
        PmergeMe pmergeMe(input);
        pmergeMe.merge();
        pmergeMe.print();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}