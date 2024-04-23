#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setfill;
using std::left;
using std::right;
using std::numeric_limits;
using std::streamsize;

void headerDesign(const string& header);
void subHeaderDesign(const string& subHeader);
void lineDesign();
void printOption(const string& option);

//!!Validation Function
void clearIgnore();
int getValidInput(int Max, int Min, const string& prompt);
