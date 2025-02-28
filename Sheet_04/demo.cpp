#include <iostream>
#include <deque>
using namespace std;

int stringScore(int n, string s) {
    deque<char> q(s.begin(), s.end()); // Using deque for efficient modifications
    int score = 0;  // Initialize score
    int i = 0;      // Pointer to track position

    while (i < q.size()) {
        char ch = q[i];

        if (ch == 'V') {
            score += 5;
        } 
        else if (ch == 'W') {
            score += 2;
        } 
        else if (ch == 'X') { // Remove next character if exists
            if (i + 1 < q.size()) {
                q.erase(q.begin() + i + 1);
            }
        } 
        else if (ch == 'Y') { // Move next character to end
            if (i + 1 < q.size()) {
                char nextChar = q[i + 1];
                q.erase(q.begin() + i + 1);
                q.push_back(nextChar);
            }
        } 
        else if (ch == 'Z') { // Check next character for division
            if (i + 1 < q.size()) {
                if (q[i + 1] == 'V') {
                    score /= 5;
                    q.erase(q.begin() + i + 1);
                } 
                else if (q[i + 1] == 'W') {
                    score /= 2;
                    q.erase(q.begin() + i + 1);
                }
            }
        }

        i++; // Move to the next character
    }

    return score;
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    cout << stringScore(n, s) << endl;

    return 0;
}
