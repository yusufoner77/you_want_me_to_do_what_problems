#include <cmath>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

void removeSpaces(string& input);
void addToVector(string input, vector<string>& holder);
void processRange(const string& range, vector<int>& problems);
void processSingle(const string& single, vector<int>& problems);
void addProblems(vector<string> &holder, vector<int>& problems);
void cleanAndSort(vector<int>& problems);
void printProblems(vector<int> problems, char problemSet);
