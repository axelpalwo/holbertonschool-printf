# holbertonschool-printf

Holberton project to implement all the learnings in the past month in C language.
It brings out every concept we learned and it's important how we implement them.

# Printf project

The Printf function is made to print formatted text.
When this function is used, as main argument is passed a string with zero or more directives.
A directive is called with "%Character", it's the way the function recognizes the type of data passed as arguments
after the main string.
When a directive is passed in the string, the function will look for that type of data specified, if any was found,
it will not print anything. If the directive is not recognized, it will print the directive as text.

# Flowchart of Printf

# Step by step of our Printf

1- We declare variables:
	tbytes -> Will store the bytes printed as the function works
	ptr -> Pointer to the first space of memory of format
	iph, sph, cph -> Placeholders for Ints, Strings and Characters.

2- We start looking in format string while is not NULL

3- Any character found will be printed with Write Function, unless the character found is '%'.

4- If '%' is found, we'll check the next position of the string and see if the character in there
	matches our conversion specifiers(c, s, i, d and %).

5- Each situation it's different from each other, but it will try to print the character in the list of arguments
	OR will treat the argument and convert it to a string to be printed.

6- As we print, we count the bytes printed, and are being stored in tbytes, which we will return at the end of the function.

# Conversion Funct.c

We get to find two main functions used for our Printf

1- Length: A function that returns the length of a string

2- int to str: A function that returns a string of a given number

#Int to Str

1- We need to count the memory to be allocated for this string

2- Every number will be 1 byte, if it's negative, its a plus byte because we need to represent the minus sign '-'
	And every string needs to have the Null terminating byte '\0'.

3- Then we allocate memory and check if its succesfull or failure.

4- If the number given is 0, then we manually return the string.

5- If its negative, we put as first position the minus sign '-' and reduce counter as now represents the quantity of numbers

6- Now begins the difficult part.
	We will calculate the division to be made so a '400' can become a '4' and then converted to character.
	We do the maths, and convert the number into a character, then store it.
	After that we do module of number for divider so we can continue to the next number
	If the number is '452' first will be divided by 100, so we can get the '4'.
	Then will be 452 % 100 -> To get the 52 as next number
	As Counter reduces, the divider will be minor each time.

7- We ended with the conversion, strings end with a null terminating byte, so we assign it.

8- We return a pointer to the first space of memory of the string.
