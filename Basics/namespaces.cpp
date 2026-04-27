#include <iostream>

namespace first{ // allows for identically name variables.
    int x = 1;
}

namespace second{
    int x = 2;
}


int main()
{
    //You can define what namepaces to use to make code cleaner..
    using std::cout;
    using std::string;

    int x = 0;

    cout << "main namespace " << x << std::endl;
    cout << "first namespace " << first::x << std::endl;
    cout << "second namespace " << second::x << std::endl;

    return 0;
}
