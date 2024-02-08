#include <cmath>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include "problems.hpp"
using namespace std;

// can't use cassert since all of my functions are void, but here are some test cases

int main() {

    cout << "Starting tests..." << endl << endl;
    
    cout << "If we are given L 1-5, 6, 8, 11-15, 5-10... the output would be: " << endl;
    
    string input1 = "L 1-5, 6, 8, 11-15, 5-10";
    char problemSet1 = input1[0];
    vector<string> holder1;
    vector<int> problems1;
    removeSpaces(input1);
    addToVector(input1, holder1);
    addProblems(holder1, problems1);
    cleanAndSort(problems1);
    printProblems(problems1, problemSet1);

    cout << endl << endl;

    cout << "If we are given M1-3... the output would be: " << endl;

    string input2 = "M1-3";
    char problemSet2 = input2[0];
    vector<string> holder2;
    vector<int> problems2;
    removeSpaces(input2);
    addToVector(input2, holder2);
    addProblems(holder2, problems2);
    cleanAndSort(problems2);
    printProblems(problems2, problemSet2);

    cout << endl << endl;

    cout << "If we are given S4-5,1-3,7-10... the output would be: " <<  endl;

    string input3 = "S4-5,1-3,7-10";
    char problemSet3 = input3[0];
    vector<string> holder3;
    vector<int> problems3;
    removeSpaces(input3);
    addToVector(input3, holder3);
    addProblems(holder3, problems3);
    cleanAndSort(problems3);
    printProblems(problems3, problemSet3);

    cout << endl << endl;

    cout << "If we are given T4-5,1-3,7-10,8-12... the output would be: " <<  endl;

    string input4 = "T4-5,1-3,7-10,8-12";
    char problemSet4 = input4[0];
    vector<string> holder4;
    vector<int> problems4;
    removeSpaces(input4);
    addToVector(input4, holder4);
    addProblems(holder4, problems4);
    cleanAndSort(problems4);
    printProblems(problems4, problemSet4);

    cout << endl << endl;

    cout << "If we are given R1-1,3-3,5-8... the output would be: " <<  endl;

    string input5 = "R1-1,3-3,5-8";
    char problemSet5 = input5[0];
    vector<string> holder5;
    vector<int> problems5;
    removeSpaces(input5);
    addToVector(input5, holder5);
    addProblems(holder5, problems5);
    cleanAndSort(problems5);
    printProblems(problems5, problemSet5);

}