//#include <stdio.h>
//#include <iostream>
//#include <vector>
// R - royal team
//int main() {
//    int n, p;
//    std::string name, maxname;
//    int c, max = 0;
//    std::cin >> n;
//    while (n) {
//        std::cin >> p;
//        for (int i = 0; i < p; ++i) {
//            std::cin >> c >> name;
//            if (i == 0) {
//                max = c;
//                maxname = name;
//            } else {
//                if (c > max) {
//                    max = c;
//                    maxname = name;
//                }
//            }
//        }
//        std::cout << maxname << std::endl;
//        max = 0;
//        --n;
//    }
//    return 0;
//}

// Q parallel computing
//int main () {
//    int t, d, n, s, p;
//    std::cin >> t;
//    while (t) {
//        std::cin >> d >> n >> s >> p;
//        if ((d + p*n) > (n*s)) {
//            std::cout << "do not parallelize" << std::endl;
//        } else if ((d + p*n) < (n*s)) {
//            std::cout << "parallelize" << std::endl;
//        } else {
//            std::cout << "does not matter" << std::endl;
//        }
//        --t;
//    }
//    return 0;
//}

//int main () {
//    int x, y, r;
//    int count = 0;
//    bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;
//    std::cin >> x >> y >> r;
//    for (int i = 0; i <= r; ++i) {
//            if ((x + i <= (x + r)*(1/2)*3.14) && (y+i <= x + r)*(1/2)*3.14) {
//                flag1 = true;
//            }
//            if ((x+i + 1 <= (r + x)*(1/2)*3.14) && (y + i + 1 <= r + y)*(1/2)*3.14) {
//                flag4 = true;
//            }
//            if ((x+ i <= (r + x)*(1/2)*3.14) && (y + i + 1 <= r + y)*(1/2)*3.14) {
//                flag3 = true;
//            }
//            if ((x+ i + 1 <= (r + x)*(1/2)*3.14) && (y + i <= r + y)*(1/2)*3.14) {
//                flag2 = true;
//            }
//        if ((flag1 && flag2 && flag3) || (flag1 && flag2) || (flag2 && flag3) || (flag1 && flag2 && flag3 && flag4) || (flag1 && flag3)) {
//                ++count;
//            flag1 = false;
//            flag2 = false;
//            flag3 = false;
//            flag4 = false;
//        }
//
//        }
//
//    std::cout << 4*count << std::endl;
//
//    return 0;
//}
//int main() {
//    int k, n, i;
//    int sum = 0;
//    std::cin >> k;
//    while (k) {
//        std::cin >> n;
//        std::vector<int> v(n);
//        for (int k = 0; k < n; ++k) {
//            std::cin >> v[k];
//        }
//        for (i = 0; i < n; ++i) {
//            auto max = std::max_element(v.begin() + i, v.end());
//            auto pos_max = std::distance(v.begin(), max);
//            sum += v[pos_max];
//            i += pos_max + 1;
//        }
//        std::cout << sum << std::endl;
//        --k;
//        sum = 0;
//    }
//    return 0;
//}
