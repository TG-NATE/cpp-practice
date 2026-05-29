#include <iostream>

template <typename T, typename U> //Generic that allow you to creat function with paramters that work with multiple type. adding typenames allows to mix and match


// T max(T x, U y){
//     return (x > y) ? x : y;
// }

auto max(T x, U y){ // auto allows compiler to decide the output
    return (x > y) ? x : y;
}

int main(){
    std::cout << max(1, 2) << '\n';

    std::cout << max('1', 2) << '\n';

    return 0;
}
