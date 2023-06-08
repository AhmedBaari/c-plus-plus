1. Create a class named Distance with one protected member Type (int). Set the value of Type
as 1 for Meter class and 2 for Feet class. Create two subclasses Meter and Feet from
Distance in public manner. Include data members Mtr and Cm in Meter class and Ft and Inch
in Feet class. All data members are of double type. Include conversion constructors in both
the classes and demonstrate the conversion of one data type to other by creating objects in
the main function and with appropriate conversion call statements.

2. Create a class Student with protected data members – Name(string), RegNo(long) and
Branch(string). Include a display() member function to print the data members. Derive Exam
class from Student as protected. Exam class has the protected data members – mark[6] (int
array) and total (int). Include member function getmarks() to populate the mark array and
compute and update the total data member. Sum of all 6 marks is to be stored in total.
Include a display() member function to print the data members Derive Result class from
Exam in private manner. Result class has one data member Grade (string). Include
computeGrade() member function that will update the Grade member based on total as
follows: total - Grade
>=90% S
>=85% AND <90 A+
>=75 AND <85 A
>=65 AND <75 B
>=55 AND <65 C
>=50 AND <55 D
ELSE FAIL

If the student has scored less than 50 in any of the subjects, the grade is FAIL. Else, compute
the grade as above. Create appropriate object in main method, invoke the required member
function and demonstrate the implementation.
3. Create an array of pointers to strings to store your friends’ names and populate the array.
Include the following functions:
a. Longest() – pass the pointer to array as argument and find out the longest name and
display its length
b. Sorted() – display the names in the increasing order of length
c. checkNames() – display the names that does not contain the given set of characters.
Make appropriate calls to the functions in the main method and demonstrate them.
4. Create an array of integers and find out and display the positions of the numbers which are
the multiples of a given input, using pointers.
5. Create an array of integers and demonstrate right shift operation of data in the array, using
pointers. For example, if the array is 45, 67, 78, 34, 23 after 2 right shift, the array should be
34, 23, 45, 67, 78.