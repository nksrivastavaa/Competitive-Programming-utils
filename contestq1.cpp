/**
 *   Author: Neelabh Kumar Srivastava 
**/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, j) for (int i = 0; i < j; i++)
#define all(a) a.begin(), a.end()

#ifndef ONLINE_JUDGE
  #include "neel_debug.h"
#else
  #define dbg(a) ;
#endif

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    freopen("error.txt", "w", stderr); 
    auto start = chrono::high_resolution_clock::now();
  #endif
  /////////////////////////////////////////////////////////////////////////////////////////////////////

  function<void(void)> solve = [](){
    
  };

  long long t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  /////////////////////////////////////////////////////////////////////////////////////////////////////
  #ifndef ONLINE_JUDGE
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "\n________________\n" << fixed << time_taken << setprecision(9) << " seconds" << "\n";
  #endif
  
  return 0;
}

/**
 *  Knowledge and awareness are equivocal, and perhaps better called illusions.
 *  Everyone lives within their own subjective interpretation.
 *                                                              ~ Uchiha Itachi
**/