#pragma once
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
void merge(int l, int m, int r, vector<int>& vec)// compersion(n)
{
    int n1 = m - l + 1, n2 = r - m;
    vector<int>Left(n1), Right(n2);
    lp(i, n1)
        Left[i] = vec[i + l];
    lp(i, n2)
        Right[i] = vec[i + m + 1];
    int i = 0, j = 0;
    int idx = l;
    while (i < n1 && j < n2)
    {
        if (Left[i] < Right[j])
        {
            vec[idx] = Left[i];
            i++;
        }
        else
        {
            vec[idx] = Right[j];
            j++;
        }
        idx++;
    }
    while (i < n1)
    {
        vec[idx] = Left[i];
        i++;
        idx++;
    }
    while (j < n2)
    {
        vec[idx] = Right[j];
        j++;
        idx++;
    }

}
void mergeSort(int l, int r, vector<int>& vec)
{
    if (l < r)
    {
        int m = l + (r - l) / 2; ;// == (l + r) / 2
        mergeSort(m + 1, r, vec);
        mergeSort(l, m, vec);
        merge(l, m, r, vec);
    }
}
