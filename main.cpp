#include <cmath>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include "problems.hpp"
using namespace std;

int main() {
    string input;

    cout << "Please enter the assignment: ";
    getline(cin, input);

    vector<string> holder;
    vector<int> problems;
    char problemSet = input[0];

    removeSpaces(input);
    addToVector(input, holder);
    addProblems(holder, problems);
    cleanAndSort(problems);
    printProblems(problems, problemSet);

}