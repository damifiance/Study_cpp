/*
    Namespace = provides a solution for preventing name conflicts
    in large projects. Each entity needs a unique name.
    A namespace allows for identically named entities
    as long as the namespaces are different
*/

#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    
    using std::cout;      //These two lines can further save some typing
    using std::string;

    int x = 0;
    //int x = 1; --> without namespace, it would result in error : redeclaration of int x
    cout << x << '\n';
    
    cout << first::x <<'\n'; // :: is known as the scope resolution operator
    cout << second::x;

    return 0;
}

/*
    int main(){
        using namespace first;
        std::cout << x;     --> in this case, because of the using namespace first; line, this will print out the integer '1'
        std::cout << second::x;      
    }
*/