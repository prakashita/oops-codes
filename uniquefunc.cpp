#include <iostream>
#include <list>

using namespace std;

/* Ignore sign of the value */
bool pred(int a, int b) {
   return (abs(a) == abs(b));
}

int main(void) {
   list <int> l = {1, -1, -1, -1, 2, 2, -2, -2, 3, -4, 4, -5, -5, 5};

   cout << "List elements before unique operation" << endl;

   for (auto it = l.begin(); it != l.end(); ++it)
      cout << *it << endl;

   /* Ignore sign of the value */
   l.unique(pred);

   cout << "List elements after unique operation" << endl;

   for (auto it = l.begin(); it != l.end(); ++it)
      cout << *it << endl;

   return 0;
}