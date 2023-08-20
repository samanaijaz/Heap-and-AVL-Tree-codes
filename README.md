# AVL TREE Problem Statement

---

## Problem Statement

There are N persons numbered 1 to N. Each person likes a range of numbers. In particular, the ith person likes numbers in the range [L[i], R[i]]. You are given Q queries, each containing the number q[j]. The answer to the jth query is the number of persons who like the number q[j].

---

## Input Format

Input is not directly provided. You are provided with four spaced integers N A B Q.

The code to generate N ranges and Q queries is as follows: [Generate Input Code](https://ideone.com/rx2Xyn)

---

## Output Format

Output a single integer denoting the sum of the answer to all queries.

---

## Constraints

**Given Input:**

- 1 <= N, A, B, Q <= 10^5
- A <= B

**Generated Input:**

- 1 <= L[i] <= R[i] <= 10^9
- 1 <= q[i] <= 10^9

---

**Note:** Sample Test and debugging inputs given in the problem statement are not part of the test cases on which you will be evaluated. Name your file either `solution.c` or `solution.cpp` in the Moodle.

**Hints:** Use AVL Tree to compress the large values of Li, Ri, and Xi to smaller values (read about coordinate compression) and answer all queries at once (read about Difference Array)

---

## Sample Input

(Suppose that generated input was as given below)

5

1 5

3 9

5 6

2 7

6 10

9

1

2

3

4

6

7

8

9

10

Note that you will only be given N, A, B, and Q as input, and you have to generate the above input using the code provided.

---

## Sample Output

21

---

## Explanation

Numbers:

1

2

3

4

5

6

7

8

9

10

Person 1: [1, 5]

1

1

1

1

1

0

0

0

0

0

Person 2: [3, 9]

0

0

1

1

1

1

1

1

1

0

Person 3: [5, 6]

0

0

0

0

1

1

0

0

0

0

Person 4: [2, 7]

0

1

1

1

1

1

1

0

0

0

Person 5: [6, 10]

0

0

0

0

0

1

1

1

1

1

SUM:

1

2

3

3

4

4

3

2

2

1

Sum of query = 1 + 2 + 3 + 3 + 4 + 3 + 2 + 2 + 1 = 21

(Note, the likeness of 5 is not included in the sum, since 5 was not in the query)

---

## Sample Input 2

3 1 2 3

## Sample Output 2

1

---

## Sample Input 3

4 2 1 4

## Sample Output 3

1

---

## Sample Input 4

3 1 1 4

## Sample Output 4

2

---

## Sample Input 5

3 2 2 2

## Sample Output 5

0

---

**Some Big Testcases for debugging:** [Debugging Test Cases](https://ideone.com/1BaCXT)

These test cases show how input and output are supposed to be originally.
