#include <iostream>
using namespace std;

int main() {

    int money, num;

    cin >> num;

    for (int i = 0; i < num; i++) {
        int q = 0,
            d = 0,
            n = 0,
            p = 0;

        cin >> money;

        q = money / 25;

        money = money - q * 25;

        d = money / 10;

        money = money - d * 10;

        n = money / 5;

        money = money - n * 5;

        p = money;

        cout << q << " " << d << " " << n << " " << p << endl;
    }


    return 0;

}