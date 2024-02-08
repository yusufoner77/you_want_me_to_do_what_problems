#include <cmath>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include "problems.hpp"
using namespace std;

void removeSpaces(string& input) {
    string temp = "";
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != ' ') {
            temp += input[i];
        }
    }
    input = temp;
}

void addToVector(string input, vector<string>& holder) {
    string temp = "";
    for (int i = 1; i < input.size(); i++) {
            if (input[i] != ',') {
                temp += input[i];
            }
            else {
                holder.push_back(temp);
                temp = "";
            }
    }
    holder.push_back(temp);
}

void processRange(const string& range, vector<int>& problems) {
    istringstream iss(range);
    char delimiter;
    int start, end;
    
    if (iss >> start >> delimiter >> end) {
        for (int i = start; i <= end; ++i) {
            problems.push_back(i);
        }
    }
}

void processSingle(const string& single, vector<int>& problems) {
    istringstream iss(single);
    int intValue;
   
    if (iss >> intValue) {
        problems.push_back(intValue);
    }
}

void addProblems(vector<string> &holder, vector<int>& problems) {
    for (int i = 0; i < holder.size(); i++) {
        if (holder[i].find('-') != string::npos) {
            processRange(holder[i], problems);
        }
        else {
            processSingle(holder[i], problems);
        }
    }
}

void cleanAndSort(vector<int>& problems) {
    sort(problems.begin(), problems.end());
    problems.erase( unique( problems.begin(), problems.end() ), problems.end() );
}

void printProblems(vector<int> problems, char problemSet) {
    cout << "Do problems ";
    for (int i = 0; i < problems.size() - 1; i++) {
        cout << problems[i] << ", ";
        if (i % 10 == 0 && i != 0) {
            cout << endl;
        }
    }
    cout << "and " << problems[problems.size() - 1] << " of " << problemSet << "." << endl;
}