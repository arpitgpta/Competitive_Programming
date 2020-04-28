#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono; 

int main() {
 	auto start =high_resolution_clock::now(); 
    // write yout code here:
// [







// ]
	auto stop =high_resolution_clock::now(); 
	auto duration=duration_cast<microseconds>(stop - start); 
	cout << "Time taken by program is = " << duration.count() << " microseconds" << "\n"; 
	return 0;
}