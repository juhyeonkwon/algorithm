#include <iostream>
using namespace std;

int main() {

    int a, b, c, m;

    // 한시간 일하면 a만큼 피로도가 쌓임
    // 한시간 일하면 b만큼의 일을 처리함
    // 한시간 쉬면 c만큼의 피로도가 사라진다
    // 피로도는 M을 안넘으려고 한다 하루는 24시간이다.

    int hour = 0;

    cin >> a >> b >> c >> m;

    int tired = 0, works = 0;

    for (int i = 0; i < 24; i++) {
            
        if (tired + a <= m) {
            tired = tired + a;
            works = works + b;
        }
        else {
            tired = tired - c;
            if (tired < 0) {
                tired = 0;
            }
        }

    }

    cout << works;

    
    return 0;

}