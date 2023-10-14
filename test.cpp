#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N > 0) {
        string S1, S2, S;
        cin >> S1 >> S2 >> S;

        int len = 2 * S1.length();
        string S12 = S1 + S2;

        int operation = 0;
        bool possible = false;

        while (operation < 2 * N) {
            if (S12 == S) {
                possible = true;
                break;
            }

            string newS1, newS2;
            for (int i = 0; i < len; i++) {
                if (i % 2 == 0) {
                    newS2 += S12[i];
                } else {
                    newS1 += S12[i];
                }
            }

            S12 = newS2 + newS1;
            operation++;

            if (S12 == S) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << operation << endl;
        } else {
            cout << -1 << endl;
        }

        cin >> N;
    }
    return 0;
}
