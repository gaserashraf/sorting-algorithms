#include<iostream>
#include<stdio.h>
#include <sstream>
#include <cstdio>
#include<fstream>
#include<algorithm>
#include<vector>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <numeric> 
#include <vector>
#include<unordered_map>
#include <stdio.h>  
#include <string.h> 
#include <math.h>
#include<chrono>
#include"selectionSort.h"
#include"insertionSort.h"
#include"mergeSort.h"
#include"quickSort.h"
#include"hybridSort.h"
using namespace std;
#define _USE_MATH_DEFINES
# define M_PI           3.14159265358979323846  /* pi */
#define ll long long 
#define ld long double 
#define vbe(v) ((v).begin()), ((v).end())
#define sz(v)     ((int)((v).size()))
#define clr(v, d)   memset(v, d, sizeof(v))
#define rep(i, v)   for(int i=0;i<sz(v);++i)
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)  for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)  for(int i=(j);i>=(int)(n);--i)
#define MIN(x, y) (((x) < (y)) ? (x) : (y))  
ll GCD(ll a, ll b) { return (a) ? GCD(b % a, a) : b; }
ll LCM(ll a, ll b) { return a * b / GCD(a, b); }
ll fastpow(ll b, ll p) { if (!p) return 1; ll ret = fastpow(b, p >> 1); ret *= ret; if (p & 1) ret *= b; return ret; }
int main(int arg, char* argv[])
{

    vector<int>vec;
    int typeOfSort = stoi(argv[1]);
    string fileInputData = argv[2];
    string fileOutputData = argv[3];
    string fileOutputTime = argv[4];


    // reading data from file data.txt
    ifstream ReadData;
    ReadData.open(fileInputData);
    string temp;
    while (getline(ReadData, temp))
    {
        vec.push_back(stoi(temp));
    }
    ReadData.close();
    auto startTime = chrono::steady_clock::now();
    if (typeOfSort == 0)
        selectionSort(vec);
    else if (typeOfSort == 1)
        insertionSort(vec);
    else if (typeOfSort == 2)
        mergeSort(0, vec.size() - 1, vec);
    else if (typeOfSort == 3)
        quickSort(0, vec.size() - 1, vec);
    else if (typeOfSort == 4)
        HybridSort(vec);
    auto endTime = chrono::steady_clock::now();
    ll timeDiff = chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count();
    ofstream outData;
    outData.open(fileOutputData);
    lp(i, vec.size())
        outData << vec[i] << "\n";
    outData.close();

    ofstream outTime;
    outTime.open(fileOutputTime);
    outTime << timeDiff;
    outTime.close();

    /*srand(time(0));
    int n = rand() % 50 + 1;
    vector<int>vec(n);
    lp(i, n)g
    {
        int x = rand() % 1000;
        vec[i] = x;
    }
    auto startTime = chrono::steady_clock::now();
    //mergeSort(0,vec.size()-1, vec);
    insertionSort(vec);
    auto endTime = chrono::steady_clock::now();
    ll timeDiff = chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count();
    cout << n << "\n";
    lp(i, n)
        cout << vec[i] << " ";
    cout << "\n";
    return 0;
    */
}
