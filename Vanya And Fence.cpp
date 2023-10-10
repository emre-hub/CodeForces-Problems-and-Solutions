#include <iostream>

int main() {
    int n;
    int h;

    if (!(std::cin >> n) || n < 1 || n > 1000) {
        return 1; 
    }

    if (!(std::cin >> h) || h < 1 || h > 1000) {
        return 1; 
    }

    int* heightsOfFriends = new int[n];
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (!(std::cin >> heightsOfFriends[i])) {
            delete[] heightsOfFriends; 
            return 1; 
        }
        if (heightsOfFriends[i] > h) {
            counter += 2;
        }
        else {
            counter++;
        }
    }
    std::cout << counter;
    delete[] heightsOfFriends;
    return 0;
}
