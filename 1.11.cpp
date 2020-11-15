#include <iostream>
#include <limits>

int main()
{
    int i;
    long j;
    
    std::cin >> i >> j;    

    std::cout << std::numeric_limits<decltype(i)>::min() << " " << i << " " << std::numeric_limits<int>::max();
    std::cout << "\n";
    std::cout << std::numeric_limits<decltype(j)>::min() << " " << j << " " << std::numeric_limits<decltype(j)>::max();
    
    return 0;
}

/*
-2147483648 1 2147483647
-9223372036854775808 2 9223372036854775807
*/