#include <iostream>
#include <concepts>
template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a + b;
}

int main(){
    std::cout << "Hello fromC++ 20 with CMake on Windows" << std::endl;
    std::cout << "The sum is : " << add(1, 2) << std::endl;
    return 0;
}
