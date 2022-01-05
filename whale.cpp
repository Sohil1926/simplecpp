#include <iostream>

#include <vector>

#include <string>

using namespace std;

int main() {
    // program to translate talk to whale talk!
    string phrase = "why are you looking at my github";

    vector < char > vowels = {
      'a',
      'e',
      'i',
      'o',
      'u'
    };

    vector < char > result;

    for (int i = 0; i < phrase.size(); i++) {
        for (int n = 0; n < vowels.size(); n++) {
            if (phrase[i] == vowels[n]) {
                result.push_back(phrase[i]);
            }

        }
        if (phrase[i] == 'e') {
            result.push_back(phrase[i]);

        }
        else if (phrase[i] == 'u') {
            result.push_back(phrase[i]);
        }
    }

    for (int j = 0; j < result.size(); j++) {
        cout << result[j];
    }

    cout << "\n";

}