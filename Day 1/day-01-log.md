# Day 1 Log: C++ basics, variables, data types, operators

**Date:** 5 Oct 2026 (Week 1, Monday)
**Plan for the day:** setup, `cin`/`cout`, variables and data types, operators, 5 tiny programs, Unstop D1 Exchanging Gifts

---

## Problems

### Exchanging Gifts (Unstop D1)
- **Idea:** two counting arrays, `given` and `received`, indexed by member number. The youngest has `given == 0` and `received == n-1`. Start with `ans = -1`, overwrite it on a match, print once after the loop.
- **Tripped on:**
  - Never filled the array (only read from it), so it printed `1 + 2 + ... + n`.
  - Loop bound ran one past the vector (`i <= n+1` on a vector of size `n+1`). Valid indices are `0..n`.
  - Forgot the "gave nothing" condition.
  - Printed inside the loop instead of tracking an answer, so it printed nothing (or two numbers glued together).
- **First idea that failed:** sum of `1..n` minus the givers. It breaks because a giver can appear many times, and it never checks the received condition.
- **Pattern to remember:** count both sides in separate arrays, then check who matches. Same idea as LC 997 (Find the Town Judge).
- **Complexity:** O(n + m).

### Sum of two numbers
- **Idea:** `cin >> a >> b; cout << a + b;`
- **Tripped on:** _fill in_ (overflow on `1000000000 1000000000`? switched to `long long`?)

### Swap two numbers
- **Idea:** `temp` variable, `swap(a, b)`, and the arithmetic way (no third variable).
- **Tripped on:** _fill in_

### Even or odd
- **Idea:** `n % 2 == 0`
- **Tripped on:** _fill in_ (tested negatives and 0?)

### Largest of three
- **Idea:** `if / else if`, ternary, `max(a, max(b, c))`
- **Tripped on:** _fill in_

### Simple calculator
- **Idea:** `switch` on the operator, handle division by zero.
- **Tripped on:** _fill in_ (`7 / 2` printing `3` is integer division; use `double`)

---

## Predict the output (answers to check against my guesses)

| # | Code | Output |
|---|---|---|
| Q1 | `7 / 2`, `7 % 2`, `7 / 2.0` | `3 1 3.5` |
| Q2 | `x = 5; y = x++ + 2;` print `x y` | `6 7` |
| Q3 | `(10 > 5 && 3 > 4)`, `(10 > 5 \|\| 3 > 4)` | `0 1` |
| Q4 | `int a = 1000000; a * a` | garbage (overflow, true value is 10^12); with `long long` it prints `1000000000000` |

My guesses: _fill in_

---

## Concepts from today (quick reference)

- **Template:** `#include <bits/stdc++.h>`, `using namespace std;`, `int main() { ... return 0; }`
- **I/O:** `cin >> a >> b;`, `cout << x << "\n";` (prefer `"\n"` over `endl`). Print only what the problem asks for.
- **Types:** `int` (about 2.1 x 10^9), `long long` (about 9.2 x 10^18), `double` (prefer over `float`), `char`, `bool`, `string`.
- **Gotchas:** overflow, integer division truncates, uninitialized variables hold junk, `=` vs `==`.
- **Operators:** `+ - * / %`, relational, `&& || !`, `+= -=` etc., `++ --`, ternary `cond ? a : b`.
- **Counting array:** use the member number as the index, size `n + 1` so index `n` exists.
- **Default answer pattern:** `int ans = -1;` overwrite on a match, print once at the end.
- **Unstop template:** the function is `void`, so print inside it. Pass vectors by reference (`&`) to avoid copying.

## Setup and debugging lessons

- Compile C++ with **`g++`**, not `gcc`. `gcc` doesn't link the C++ standard library, which gives a wall of `undefined reference` errors.
- Command: `g++ -std=c++17 -Wall -Wextra file.cpp -o file` then `.\file` in PowerShell.
- `bits/stdc++.h` works on my setup (MSYS2 g++).
- If the output surprises me, hand-trace the smallest sample before changing code.
- If a vector has size `S`, the loop must stop at index `S-1`.

---

## Tracker

```
Week 1 | Lectures done: _/_ | Problems solved: 6 | Needed solution: 0 | Parked: 0
Hardest thing this week: Exchanging Gifts (counting arrays, bounds)
What to re-solve on Sunday: Exchanging Gifts from scratch, no looking
```
