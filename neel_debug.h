#include<bits/stdc++.h>
using namespace std;

#define dbg(a) cerr << endl; cerr << #a << ": "; _print(a); cerr << endl << endl;

void _print(int t) {cerr << t;}
void _print(long long t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(float t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
void _print(long double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T, class U, class V> void _print(tuple <T, U, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T, class U, class V> void _print(tuple <T, U, V> p) {cerr << "{"; _print(get<0>(p)); cerr << ","; _print(get<1>(p)); cerr << ","; _print(get<2>(p)); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> umap) {cerr << "{ "; for(auto i : umap) {cerr << "{";_print(i.first); cerr << ", "; _print(i.second); cerr << "} ";} cerr << "}";}