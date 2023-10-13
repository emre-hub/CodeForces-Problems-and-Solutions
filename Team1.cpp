#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n; //yarismadaki toplam soru sayisi
    if (!(std::cin >> n) || n < 1 || n > 1000) { //soru sayisi disaridan alinacak
        return 1;
    } 
    std::cin.ignore(); // Bos girdiyi kabul etme.
    int x = 0; // Dogru bilinen soru sayisi

    for (int i = 0; i < n; i++) {
        std::string answers;
        std::getline(std::cin, answers); //orn cevap : 1 0 0   veya 1 1 0  vb.

        answers.erase(std::remove_if(answers.begin(), answers.end(), ::isspace), answers.end()); // Bosluk karakterlerini sil

        int counter = 0;
        for (int j = 0; j < answers.size(); j++) {
            if (answers[j] == '1') {
                counter++;
                if (counter >= 2) {
                    x++;
                    break;
                }
            }
        }
    }

    std::cout << x << std::endl;
    return 0;
}
