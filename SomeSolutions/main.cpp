////
//////#include <iostream>
//////#include <algorithm>
//////#include <vector>
//////#include <set>
//////#include <map>
//////
//////struct bludo {
//////    int p;
//////    int w;
//////};
//////
//////bool comparator(const bludo &a, const bludo &b) {
//////    return a.p < b.p;
//////}
//////
//////
//////int main(int argc, const char * argv[]) {
//////    int n, s;
//////    std::cin >> n;
//////    std::vector<bludo> g(n);
//////    std::cin >> s;
//////    int p, w;
//////    int summ = 0;
//////    for (int i = 0; i < n; ++i) {
//////        std::cin >> p >> w;
//////        g[i].p = p;
//////        g[i].w = w;
//////    }
//////    std::sort(g.begin(), g.end(), comparator);
//////
//////    for (int i = n - 1; i >= 0; --i) {
//////        if (s > g[i].w) {
//////            summ += g[i].p * g[i].w;
//////            s -= g[i].w;
//////        }
//////        else {
//////            summ += s * g[i].p;
//////            break;
//////        }
//////    }
//////    std::cout << summ;
//////    return 0;
//////}
//////int main() {
//////    std::vector<std::string> vec;
//////    std::string str;
//////    char symb;
//////    while(std::cin >> str) {
//////
//////        vec.emplace_back(str);
//////    }
//////    std::set<std::string> s(vec.begin(), vec.end());
//////    std::cout << s.size() - 1;
//////}
//////
//////int main() {
//////    int n, k, res = 0;
//////    std::cin >> n;
//////    std::map<int, int> a;
//////    std::map<int, int> b;
//////    for (int i = 1; i <= n; ++i) {
//////        std::cin >> k;
//////        a.emplace(k, i);
//////    }
//////    for (int i = 1; i <= n; ++i) {
//////        std::cin >> k;
//////        b.emplace(k, i);
//////    }
//////    for (int i = 1; i <= n>>1; ++i) {
//////        res += abs(a.find(n + 1 - i)->second - b.find(i)->second);
//////    }
//////    if (n&1){
//////        res += abs(a.find(n>>1)->second - b.find(n>>1 + 1)->second);
//////
//////    }
//////
//////    std::cout << res;
//////}
////
//////contest for 1st course
//////
//////#include <iostream>
//////#include <algorithm>
//////#include <vector>
//////#include <set>
//////#include <map>
////// //A
//////
//////int main() {
//////    int N, magic;
//////    std::cin >> N;
//////    bool flag = false;
//////    std::vector<int> koloda(N);
//////
//////    for (int i = 0; i < N; ++i) {
//////        std::cin >> koloda[i];
//////    }
//////    std::sort(koloda.rbegin(), koloda.rend());
//////    for (int i = 0; i < N; ++i) {
//////        std::cout << koloda[i];
//////    }
//////
//////    for (int i = 1; i < N; ++i) {
//////        magic = koloda[i];
//////        if (koloda[0] == magic + N - 1) {
//////            flag = true;
//////            break;
//////        }
//////        else {
//////            flag = false;
//////        }
//////    }
//////    if (!flag) {
//////        std::cout << "Scammed\n";
//////    } else {
//////        std::cout << "Deck looks good\n";
//////    }
//////    return 0;
//////}
//////    int main = koloda[0];
//////    bool flag = false;
//////    for (int i = 1; i < N; ++i) {
//////        if (koloda[i] == (main + 1)) {
//////            flag = true;
//////            ++main;
//////        }
//////        else {
//////            flag = false;
//////            break;
//////        }
//////    }
////
//////        int main = koloda[1] - koloda[0];
//////        if (main != 1) {
//////            std::cout << "Scammed\n";
//////            return 0;
//////        }
//////        for (int i = 2; i < N; ++i) {
//////            if ((koloda[i] - koloda[i-1]) != main) {
//////                std::cout << "Scammed\n";
//////                return 0;
//////            }
//////        }
//////
//////    std::cout << "Deck looks good\n";
//////    return 0;
//////}
//////     D
//////int main() {
//////    int n, cnt = 0;
//////    int same = 0;
//////    std::cin >> n;
//////    std::set<std::string> collection;
//////    std::string str, old, newstr;
//////    for (int i = 0; i < n; ++i) {
//////        std::cin >> str;
//////        old = str;
//////        std::sort(str.begin(), str.end());
//////        collection.emplace(str);
//////    }
//////    std::cout << collection.size();
//////    return 0;
//////}
////
////// I
//////int main() {
//////    int n;
//////    std::cin >> n;
//////    std::vector<int> sides;
//////    int buf, count;
//////    int len;
//////    for (int i = 0; i < n; ++i) {
//////        std::cin >> buf;
//////        if (buf > 0) sides.emplace_back(buf);
//////        else break;
//////    }
//////    sort(sides.rbegin(), sides.rend());
//////    len = sides.size();
//////    count = 0;
//////    for (int i = 0; i < len; ++i) {
//////        for (int j = i+1; j < len; ++j) {
//////            for (int k = j+1; k < len && sides[i] < sides[j] + sides[k]; k++) {
//////                std::cout << sides[i] << ' ' << sides[j] << ' ' << sides[k] << std::endl;
//////                ++count;
//////            }
//////        }
//////    }
//////    std::cout << count << '\n';
//////    return 0;
//////
//////}
////
////
////
////// I
//////#include <iostream>
//////#include <string>
//////#include <set>
//////using namespace std;
//////
//////int main() {
//////    set<string> vec;
//////    string place, log;
//////
//////    while (getline(cin, place)) {
//////        if (place[0] == 'r') {
//////            log = place.substr(10, place.size());
//////        }
//////        else {
//////            if (place[3] == 'i') {
//////
//////            }
//////        }
//////        vec.emplace(place);
//////        place.clear();
//////    }
//////
//////    cout << vec.size() << endl;
//////    return 0;
//////}
////#include <iostream>
////#include <algorithm>
////#include <vector>
////#include <queue>
////#include <set>
////#include <string>
////#include <map>
////
////int main() {
////    std::string str;
////    std::queue<std::string> q;
////    std::set<std::string> dict;
////    std::cin >> str;
////    int sub_len = str.length() / 2;
////    int length = str.length();
////    std::string sub = str.substr(0, sub_len);
////
//////    while (dict.count(sub)) {
//////        dict.emplace(sub);
//////        sub = str.substr(sub_len, length);
//////        //std::string tmp = str;
//////        str = str.substr(length - 1, length) + str.substr(0, length);
//////    }
//////    std::string res1 = sub;
//////    std::string res_str = sub + str.substr(sub_len, length);
//////
////
////    while (length % sub_len == 0) {
////        length += str.length();
////    }
////
////    std::cout << length / sub_len << std::endl;
////    return 0;
////}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//#include <map>
//
//int main() {
//    int z, n;
//    std::cin >> z;
//    std::vector<int> o;
//    std::vector<std::vector<int>> A;
//    int tasteofslice, sum = 0;
//    while (z) {
//        std::cin >> n;
//        while (std::cin >> tasteofslice) {
//            o.emplace_back(tasteofslice);
//            sum += tasteofslice;
//        }
//        --z;
//    }
//
//    for (int i = 0; i < sum; ++i) {
//        A[0][i] = 0;
//    }
//    for (int i = 0; i < sum; ++i) {
//        A[i][0] = 0;
//    }
//
//    for (int k = 0; k <  n; ++k) {
//        for (int s = 0; s < sum; ++s) {
//            if (s >= o[k]) {
//                A[k][s] = max(A[k - 1][s], A[k - 1][s - w[k]] + p[k]);
//            } else {
//                A[k][s] = A[k - 1][s];                            //Иначе, не кладем
//            }
//        }
//    }
//}
//for i = 0 to w
//  A[0][i] = 0
//for i = 0 to n
//  A[i][0] = 0                                               //Первые элементы приравниваем к 0
//for k = 1 to n
//  for s = 1 to w                                            //Перебираем для каждого k все вместимости
//    if s >= w[k]                                            //Если текущий предмет вмещается в рюкзак
//      A[k][s] = max(A[k - 1][s], A[k - 1][s - w[k]] + p[k]) //Выбираем класть его или нет
//    else
//      A[k][s] = A[k - 1][s]                                 //Иначе, не кладем
//Затем найдем набор ans
//a
//n
//s
// предметов, входящих в рюкзак, рекурсивной функцией:
//
//function findAns(int k, int s)
//  if A[k][s] == 0
//    return
//  if A[k - 1][s] == A[k][s]
//    findAns(k - 1, s)
//  else
//    findAns(k - 1, s - w[k])
//    ans.push(k)
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(){
//    short N;
//    cin >> N;
//    vector<vector<long long>> A(N, vector<long long>(N)), B(N, vector<long long>(N)), C(N, vector<long long>(N, 0));
//    for(short i = 0; i < N; ++i){
//        for(short j = 0; j < N; ++j){
//            cin >> A[i][j];
//        }
//    }
//    for(short i = 0; i < N; ++i){
//        for(short j = 0; j < N; ++j){
//            cin >> B[i][j];
//        }
//    }
//    for(short i = 0; i < N; ++i){
//        for(short j = 0; j < N; ++j){
//            for(short k = 0; k < N; ++k){
//                C[i][j] += A[i][k]*B[k][j];
//            }
//            cout << C[i][j] << ' ';
//        }
//        cout << endl;
//    }
//}
//
//
//double distance_to_line(int a, int b, int t) {
//    double area = abs(cross(b-a, p-a));
//    double k = distance(a, b);
//    return area/k;
//}
//int main() {
//    std::cin >>
//    distance_to_line(<#int a#>, <#int b#>, <#int t#>)
//    return 0;
//}
