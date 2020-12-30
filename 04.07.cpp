Exercise 4.7: What does overflow mean? Show three expressions that will
overflow.

-------------------------------------------------------------------------

+) Overfow happens when a value is computed that is outside the range of values that the type can represent.
+) three expressions that will overflow.
1) int i = 12 / 0;
2) short short_value = 32767 //max value if shorts are 16 bits
   short_value *= 2;         //overflow happen
3) unsigned int i = 4294967295 // max value of unsigned int type
   i += 1 //overflow happen
