#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false);
    int t, n;
    std::cin >> t;
    while (t) {
        std::cin >> n;
        std::vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		std::sort(a.begin(), a.end());

		int step = 0;
		int point = (n - 1) >> 1;
		int sign = 1;
		for (int i = 0; i < n; ++i) {
			sign *= -1;
			if (i & 1) {
				++step;
			}
			std::cout << a[point + sign * step] << " ";
		}
		std::cout << '\n';
		--t;
    }
    
    return 0;
}