#include <bits/stdc++.h>

#include "algorithm.h"
int moore(std::vector<int> ar) {
    int majorElement, count;
    count = 0;
    for (int ai : ar) {
        if (count == 0) {
            majorElement = ai;
        }
        (ai == majorElement) ? count += 1 : count += -1;
    }
    return majorElement;
}