#include <iostream>


int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false);
    int t, n;
    std::cin >> t;
    while (t) {
        std::cin >> n;
        std::cout << n << '\n';
        --t;
    }
    
    return 0;
}

