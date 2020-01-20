#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>


int main() {
    int N;
    std::cin >> N;

    std::vector<int> koloda(N);
    
    for (int i = 0; i < N; ++i) {
        std::cin >> koloda[i];
    }
    int main = koloda[0];
    bool flag = false;
    for (int i = 1; i < N; ++i) {
        if (koloda[i] == (main + 1)) {
            flag = true;
            ++main;
        }
        else {
            flag = false;
            break;
        }
    }
    if (!flag) {
        std::cout << "Scammed\n";
    } else {
        std::cout << "Deck looks good\n";

    }
    return 0;
}
