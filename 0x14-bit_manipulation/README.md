 C - Bit manipulation
How to manipulate bits and use bitwise operators

###  0x14. C - Bit manipulation

# Its a 14th project of ALX-Low_level_programming in c

-----------------------------------------

Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a word. Computer programming tasks that require bit manipulation include low-level device control, error detection and correction algorithms, data compression, encryption algorithms, and optimization.

-------------
## The hexadecimal number system

  Digit          | Binary                        |Examples |
|----------------|-------------------------------|-----------------------------|
| `0` | 0000 | y |
| `1` | 0001 | y |
| `2` | 0010 | y |
| `3` | 0011 | y |
| `4` | 0100 | y |
| `5` | 0101 | y |
| `6` | 0110 | y |
| `7` | 0111 | y |
| `8` | 1000 | y |
| `9` | 1001 | y |
| `a` | 1010 | y |
| `b` | 1011 | y |
| `c` | 1100 | y |
| `e` | 1101 | y |
| `f` | 1111 | y |


------------
# Hexadecimal is assigned usign "0x" notation.

...... ----
#### Bitwise operation used
 operator | meaning | comment|
 `&` | The & operator is the bitwise logical and operator, which forms the logical and of pairs of bits taken from two numbers | `(1010)&(0110) = (0010) = 0x2`
 `|` | operator forms the bitwise or `x|y` | `(1010)|(0110) = (1110) = 0xe`
 `^`| operator forms the exclusive or of bits | `(1010)^(0110) = (1100) = 0xc`
 `~`| operator is the bitwise negation operator |`0xb = 1011, ~x evaluates to 0100`

 # working with individual bits

## == equal operators
  If we have an unsigned short variable x with the value of 0xa8 = 10101000 and we want to determine whether or not the last bit is a 0, we would use the test x&0x01 == 0,
## | or operator
  To set bits in a number to particular values we use either | or & depending on whether we want to set that bit to be a 1 or a 0. For example, to set the fourth bit in an eight bit variable y to be a 1 we would use y = y|0x10

## & and operator
  To set the fourth bit of y to 0 we would use & with the mask 0xef = 11101111: y = y&0xef

## ~ negation
Another way to do this is to use the ~ operator to help construct the mask: y = y&(~0x10)

========= TASKS ============
TASK 0:
Write a function that converts a binary number to an unsigned int.

Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL

TASK 1:
Write a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators

TASK 2:
Write a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured

TASK 3:
Write a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

TASK 4:
Write a function that sets the value of a bit to 0 at a given index.

Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

TASK 5:
Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
You are not allowed to use the % or / operators

TASK 6:
Write a function that checks the endianness.

Prototype: int get_endianness(void);
Returns: 0 if big endian, 1 if little endian

TASK 7:
Find the password for this program.

Save the password in the file 101-password
Your file should contain the exact password, no new line, no extra space

