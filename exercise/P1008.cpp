#include <iostream>
#include <string>
using namespace std;
//仅使用于C++11以上，建议vs
int main() {
    for (int i = 123; i <= 333; i++) {
        string temp[4];
        temp[1] = to_string(i); 
        temp[2] = to_string(i * 2); 
        temp[3] = to_string(i * 3);
        bool a[10];
        bool whether = 1;
        for (int j = 1; j < 10; j++) {
            a[j] = 0;
        }
        for (int j = 1; j < 4; j++) {
            for (int o = 0; o < 3; o++) {
                if (a[((int)temp[j][o]) - 48] == 1) {
                    whether = 0;
                    break;
                }
                a[((int)temp[j][o]) - 48]=1;
            }
            if (whether == 0)
                break;
        }
        if (whether == 0)
            continue;
        else
            cout<<i<<' '<<i*2<<' '<<i*3<<endl;
    }
    return 0;
}