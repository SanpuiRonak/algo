#include <bits/stdc++.h>

#include "algorithm.h"

int findDuplicate(std::vector<int>& nums) {
    int fast, slow;
    fast = slow = nums[0];
    do {
        fast = nums[nums[fast]];
        slow = nums[slow];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast) {
        fast = nums[fast];
        slow = nums[slow];
    }
    return slow;
}