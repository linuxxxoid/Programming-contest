#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>

using namespace std;

//double polar_degree(x, int y)



int main(){
    int x0, y0, x1, y1, x2, y2;
    short N;
    cin >> N;
    for(short i = 0; i < N; ++i){
        cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
        int vx1 = x1 - x0;
        int vx2 = x2 - x0;
        int vy1 = y1 - y0;
        int vy2 = y2 - y0;
        double f1 = vy1 < 0 ? atan2(-vy1, -vx1) + 3.14159265358979323846 : atan2(vy1, vx1);
        double f2 = vy2 < 0 ? atan2(-vy2, -vx2) + 3.14159265358979323846 : atan2(vy2, vx2);
        double f = max(f1, f2) - min(f1, f2);
        if(f > 3.14159265358979323846){
            f = 2 * 3.14159265358979323846 - f;
        }
        printf("%.8e\n", f);
    }
}
