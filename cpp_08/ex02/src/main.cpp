#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top of the stack:" << mstack.top() << std::endl;
   
    mstack.pop();
    std::cout << "\nSize of the stack after popping the top element: " << mstack.size() << std::endl;
    std::cout << "Top of the stack after popping the top element: " << mstack.top() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    std::cout << "\nTop of the stack after pushing: " << mstack.top() << std::endl;
        std::cout << "\nStack after pushing: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    std::cout << "\nSize of the stack after pushing: " << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << "Iterating through the stack: \n";
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    return 0;
}