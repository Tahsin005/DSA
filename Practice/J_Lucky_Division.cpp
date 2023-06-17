#include<bits/stdc++.h>
using namespace std;

bool isLucky(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        number /= 10;
    }
    return true;
}

bool isAlmostLucky(int number) {
    for (int i = 1; i <= number; i++) {
        if (number % i == 0 && isLucky(i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    cin >> num;

    if (isAlmostLucky(num)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
