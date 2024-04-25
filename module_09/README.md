#	M09
### EX00
BitcoinExchange is a class, it loads from a csv file to whatever container as \
long as it is unique in relation to the other exercises of this module.
Container used: Map
Content is parsed and the map is filled, loading the database of *Date,Value*.
Another kind of input comes from an input file, required to be formatted as: \
*Year-Month-Day | Value*.
A function which takes the second input is provided by the BE class.
It parses and outputs the resulting conversion, which is the result of:
- Looking up the key passed as input.
- Match is always enforced based on the closed known earliest value.
- Result is then cumputed as float to preserve precision.

###	EX01
The task require the parsong of two files, which than need to be parsed using \
whatever container as long as it is unique in relation to the other exercises \
of this module.
Container used: Stack
Later an insert-compute operation is performed uppon the Stack container, \
processing each number, and possibly operator, one by one.
