// Multiples of 3 and 5
// Show HTML problem content 
// Problem 1
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main(){
//   int ans = 0;
//   for (int i = 1; i < 1000; i++){
//     if (i % 3 == 0 || i % 5 == 0){
//       ans += i;
//       }
//     }
//     cout << ans << endl;
//     return 0;
  int t3 = (3 + 999) * 333 / 2;
  int t5 = (5 + 995) * 199 / 2;
  int t15 = (15 + 990) * 66 / 2;
  cout << t3 + t5 - t15 << endl;
  return 0;
}
 
