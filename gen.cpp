// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int n = rand(1, N);    
    printf("%d\n", n);
    // set<int> used;
    for (int i = 0; i < n; ++i) {
        int x;

        // no duplicates
        // do {
        //     x = rand(1, n);
        // } while (used.count(x));
        // used.insert(x);

        // duplicates
        x = rand(1,n);        
        printf("%d ", x);  
    }
    puts("");
}
