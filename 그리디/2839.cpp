#include <iostream>
using namespace std;

#define MAX 1000

int main() {
    int num;
    int count = 0;
    cin >> num;

    while(num > 0) {
        if(num % 5 == 0) {
            num = num - 5;
            count++;
        } else if(num % 3 ==0) {
            num = num - 3;
            count++;
        } else if(num > 5) {
            num = num - 5;
            count++;
        } else {
            count = -1;
            break;
        }
    }

    cout << count;



}