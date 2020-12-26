Exercise 4.2: Using Table 4.12 (p. 166), parenthesize the following
expressions to indicate the order in which the operands are grouped:
(a) * vec.begin()
(b) * vec.begin() + 1

-------------------------------------------------------------------------

(a)( * vec(.begin(())))
-> first is . operator (member selector), second is () operator function call and finally is * operator (dereference)

(b) ((* vec(.begin(()))) + 1)
-> first is . operator (member selector), second is () operator function call and thirdst is * operator (dereference)
and finally is + operator (addition)
