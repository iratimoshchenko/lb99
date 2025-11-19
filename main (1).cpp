#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<char> q; 
    int n, count = 0;
    char c;

    cout << "Введiть розмiр черги: ";
    cin >> n;

    cout << "Введiть " << n << " символiв:\n";
    for (int i = 0; i < n; i++) {
        cin >> c;
        q.push(c);
    }

    while (!q.empty()) {

        char letter = q.front();

        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y' ||
            letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'Y')
        {
            count++;
        }

        q.pop();
    }

    cout << "Кiлькiсть голосних лiтер у черзi: " << count << endl;

    return 0;
}