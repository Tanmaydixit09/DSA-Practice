# Array DSA Problems

Daily 1 problem practice.

## Day 1: Two Sum (LeetCode #1)
**Status:** ✅ Solved

**Problem:** Given array `nums` and `target`, return indices of two numbers that add up to `target`.

**Approach:** HashMap to store `nums[i]` -> index. For each i, check `target - nums[i]`. O(n) time, O(n) space.

**Solution:** [Two Sum](Two Sum)

**Test:** `nums = {2,7,11,15}`, `target=9` → `[0,1]`

**Compile & Run:**
```
g++ "Two Sum" -o two_sum && two_sum
```

## Day 2: Remove Duplicates from Sorted Array (LeetCode #26)
**Status:** ✅ Solved

**Problem:** Remove duplicates in-place from sorted nums, return k = unique length (first k elems unique).

**Approach:** Two pointer. Slow for next unique position. O(n) time, O(1) space.

**Solution:** [RemoveDuplicates.cpp](RemoveDuplicates.cpp)

**Test:** `{1,1,2}` → `k=2, [1,2]`

**Compile:** `g++ RemoveDuplicates.cpp -o remove_dup & ./remove_dup`
