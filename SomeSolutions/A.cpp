#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i, j, n, m, v, res = 0;
    cin >> n >> m;
    vector<int> input(n);
    vector<int> output(m, -1);
    for(i = 0; i < n; ++i){
        cin >> j;
        input[i] = j;
    }
    for(i = 0; i < n; ++i){
        v = input[i];
        if(v > m || output[v-1] > -1){
            continue;
        }
        //cout << "here:" <<  v << endl;
        res = 0;
        //cout << v << "!\n";
        for(j = i; j > 0; --j){
            //cout << j << ":" << res << endl;
            if((input[j] > v && input[j-1] < v) || (input[j] < v && input[j-1] > v)){
                res+=3;
                --j;
            }else if(input[j] == v){

            }else{
                ++res;
            }
            //cout << v << ":" << res << endl;
        }
            //cout << 0 << ":" << res << endl;
        

        j = n - 1;
        if((input[0] > v && input[n-1] < v) || (input[0] < v && input[n-1] > v)){
            res+=3;
            --j;
        }else if(input[0] == v){

        }else{
            ++res;
        }
        //cout << v << ":" << res << endl;

        for(; j > i; --j){
            //cout << j << ":" << res << endl;            
            if((input[j] > v && input[j-1] < v) || (input[j] < v && input[j-1] > v)){
                res+=3;
                --j;
            }else if(input[j] == v){

            }else{
                ++res;
            }
            //cout << v << ":" << res << endl;

        }
        output[v-1] = res;
        /*if(output[v-1] > 0 && output[v-1] <= res){
            
        }else{
            output[v-1] = res;
        }*/
    }
    for(j = 0; j < m - 1; ++j){
        cout << output[j] << ' ';
    }
    cout << output[m-1] << endl;
    return 0;
}