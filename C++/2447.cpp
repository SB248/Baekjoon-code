#include <iostream>

using namespace std;
void star(int e, int i, int j);

int main() {

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            star(n, i, j);
        }
        cout << "\n";
    }


    return 0;
}

//(i / 3) % 3 == 1 && (j / 3 ) % 3 == 1
void star(int e, int i, int j) {
    if ((i / e) % 3 == 1 && (j / e) % 3 == 1) {
        cout << " ";
        return;
    }
    else if(e==1)
    {
        cout << "*";
        return;
    }
    star(e/3, i, j);
}
