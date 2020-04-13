#include <iostream>
#include <algorithm>
#include <vector>


int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false);
    int h, w, n, res;
    std::vector<std::pair<int, int>> poddons;

    std::cin >> n;
    while (n) {
        std::cin >> h >> w;
        if (h <= w) {
            poddons.emplace_back(std::make_pair(h, w));
        } else {
            poddons.emplace_back(std::make_pair(w, h));
        }
        --n;
    }

    std::sort(poddons.begin(), poddons.end());
    n = poddons.size();

    int i = 0, j = 1;
        while(i + j < n) {
            if (poddons[i].second < poddons[i + j].second && poddons[i].first < poddons[i + j].first) {
                ++i;
                j = 1;
            } else {
                ++j;
            }
        }
    res = n - i;
    std::cout << res << std::endl;
    
    return 0;
}

