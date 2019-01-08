
# C++ London Uni STL Containers exercises #

(Adapted from [these exercises](http://halpernwightsoftware.com/stdlib-scratch/exercises.html)
by Pablo Halpern)

## Exercise 1 ##

Imagine you are writing a program to manage a shopping list. Each shopping list
item is represented by a string stored in a container. Your design requires a
print function that prints out the contents of the shopping list.

Using a `std::vector` to hold the shopping list items, write a print function to print
out the contents of a vector of strings. Test your print function with a `main()`
program that does the following:

 * Create an empty vector. Print it.
 * Append the items, "eggs," "milk," "sugar," "chocolate," and "flour" to the list.
   Print it.
 * Remove the last element from the vector. Print it.
 * Append the item, "coffee" to the vector. Print it.
 * Write a loop that searches for the item, "sugar" and replace it with "honey."
   Print the vector.
 * Write a loop that searches for the item, "milk," and then remove it from the
   vector. (You are permitted to reorder the vector to accomplish the removal,
   if you want.) Print the vector.
   
## Exercise 2 ##

A building security system has door locks that are opened by typing a four-digit
access code into a keypad. The access code is validated by querying an `Access`
object with the following interface:

```cpp
struct Access
{
  void activate(int code);
  void deactivate(int code);
  bool is_active(int code) const;
};
```

Each employee is given a different access code, which is activated using the
`activate()` function. When an employee leaves the company, his or her access
code is deactivated using the `deactivate()` function.

Implement the `Access` class specified above. Write a test program that does the
following:

 * Create an Access object.
 * Activate the codes 1234, 9999, and 9876.
 * Prompt the user for an access code. Read the code from the console.
 * Tell the user whether the door opened successfully.
 * Repeat the last two steps until the door opens.
 * Deactivate code that worked. Also, deactivate code 9999 and activate code 1111.
 * Repeat steps 3 and 4 until the door opens.


