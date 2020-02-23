#include <iostream>
#include <vector>

using namespace std;

int main() {
    int col =0;
    vector <int> SG1 = {1, 3, 5, 7, 11, 2};
    vector <int> prime;


    for (int j=0; j < SG1.size(); ++j) {
        bool f = false; //изначально считаем число простым
        int i = 2;        //проверяем на четность
        if (SG1[j] % i == 0 && SG1[j] != 2) {
            f = true;
        }
        else {   //если не четное, проверяем на составность
                    i = 3;
                    while (i * i <= SG1[j] && !f) {
                       if (SG1[j] % i == 0) {                     //если составное
                          f = true;                               //флаг меняется
                       }
                       ++ ++i;
                    }
                    if (!f) prime.push_back(SG1[j]);
        }
    }

    col = prime.size();
    for (int i = 0; i < col; i++) {
        cout << prime[i] << " ";
    }

    return 0;
}
