
#include <iostream>

int main() {
    char a = 'A';
    char const *ptr = &a;

    std::cout << "Value of variable a: " << a << std::endl;
    std::cout << "Address stored in ptr: " << static_cast<void*>(ptr) << std::endl;// this will give error
    


    return 0;
}
