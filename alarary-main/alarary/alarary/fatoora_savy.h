#pragma once
#include <string>
#include <vector>
using namespace std;

string getCurrentDate();
void createBillFile(const string& billIndex, const string& fileContent, const double& total);
void createBillFileRef(const double& total);
vector<pair<double, string>> getCartTotals();