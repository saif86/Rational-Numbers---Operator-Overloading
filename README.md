# Rational-Numbers---CPP-Class
Operator overloading concepts in OOP.

## Task 1 - Defining C++ Class and Member Functions
Create a class called **Rational** for performing arithmetic with fractions. Write a program to test your class.

Use integer variables to represent the **private** data of the class - the **numerator** and the **denominator**. Provide a constructor that enables an object of this class to be initialized when it is declared. The constructor should contain default values in case no initializers are provided and should store the fraction in reduced form. For example, the fraction: 2 / 4 would be stored in the object as 1 in the numerator and 2 in the denominator. Provide public member functions that perform each of the following tasks:
  * Adding two **Rational** numbers. The result should be stored in reduced form.
  * Subtracting two **Rational** numbers. The result should be stored in reduced form.
  * Multiplying two **Rational** numbers. The result should be stored in reduced form.
  * Dividing two **Rational** numbers. The result should be stored in reduced form.
  * Printing **Rational** numbers in the form **a / b**, where **a** is the numerator and **b** is the denominator.
  * Printing **Rational** numbers in floating-point format.
  
## Task 2 - Operator Overloading
Create a class RationalNumber (fractions) with the following capabilities:
 * Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies fractions that are not in reduced form and avoids negative denominators.
 * Overload the addition, subtraction, multiplication and division operators for this class.
 * Overload the input and output stream operators for this class.
 * Overload the relational and equality operators for this class.

## Task 3 - Unary Operator Overloading
For the RationalNumber class created above, do the following additional functionalities:
 * Overload the unary –(minus) operator for this class e.g. if RationalNumber r1 = 2 / 3, then –r1 = - 2 / 3
 * Overload the pre and post increment/decrement operators for this class e.g. if RationalNumber r1 = 2/3, then r1++ = 5/3 and r1-- = -1 / 3
 * Write the constructor to convert a float type number into rational number.
 * Overload the operator float to convert a rational number into float type.
