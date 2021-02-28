#include <bits/stdc++.h>

#include "algorithm.h"
int kadane(std::vector<int> ar) {
    int global_max, max;
    global_max = max = ar[0];
    for (int ai : ar) {
        max = std::max(max + ai, ai);
        global_max = std::max(max, global_max);
    }
    return global_max;
}