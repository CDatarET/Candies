# Candies
CodeChef Difficulty 1018 Problem. 

# Candies - Price Validation Problem

Abhi is a salesman who sells two types of candies in `N` different cities.

To ensure the prices are valid, Abhi's boss has set a rule:

> **Each type of candy must have distinct prices across all N cities.**

However, Abhi made a mistake. Instead of recording the prices of the two candy types separately, he mixed them all together in a single list of `2N` prices.

Now, your task is to help determine if it's possible to split this list into two separate arrays of size `N` such that **each array contains only unique elements**.

---

## Problem Conditions

A valid split is only possible if **no element in the array appears more than twice**, since:
- Each array must be of length `N`
- Each array must contain distinct prices
- The combined array is of size `2N`

---

## Input Format

- The first line contains a single integer `T` — the number of test cases.
- For each test case:
  - The first line contains an integer `N` — the number of cities.
  - The second line contains `2N` space-separated integers — the mixed prices for both types of candies.

---

## Output Format

For each test case, output `Yes` if it's possible to split the prices into two valid arrays as described. Otherwise, output `No`.

> Output is case-insensitive, i.e., `Yes`, `YES`, `yEs` are all considered correct.

---
