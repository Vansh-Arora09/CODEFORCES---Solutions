#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    while(n-- > 0) {
        int x, y, z;
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }

    if(sum1 == 0 && sum2 == 0 && sum3 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

