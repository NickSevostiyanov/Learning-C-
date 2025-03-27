// =========
// 3/26/2025
// Nick here at BCIT, Wednesday, Derek Jamensky's class
// This is the first code I've made using C
// A simple hello world print


#include <stdio.h>
//       ^^^^^^^^
//       Header file library
//          Allows us to work with input and output functions
//          (such as printf()



// int main() {
//     printf("Hello world!");
//     return 0;
// }

// C = ignores whitespace
// main() = function
    // code inside {} will be executed

// printf() = function
// every C statement ends with semicolon ;

int main(){printf("Hello world");return 0;}
return 0; = end main() function


// ============
// C STATEMENTS

    printf("Hello world");
        // computer instructions = Statements
        // Must end with semicolon ;

    int main() {
        printf("This is a print statement");
        printf("Another print will NOT");
        printf("Make this multiline");
        return 0;
    }

    // ---------------
    // Escape Sequence

        int main() {
             printf("The backlash N WILL be multiline \n");
             printf("\n\nFor example\n\n");
             return 0;
        }

        // \n = Escape Sequence
        // \t = Creates horizontal tab
        // \\ = Inserts a backlash character (\)
        // \" = Inserts a double quote character

        int main() {
             printf("test \t this \" now \n Test \\ Example");
             return 0;
        }

    // -------------
    // Comments In C

        // This is a comment

        /*
        This is a
        Multi-line comment
        */

        printf("function") // comments can go after code


// ===========
// C VARIABLES

    // ----------------------------
    // different TYPES of variables

        // int      = stores integers (whole numbers)
                        // 123, -123, 5000, -5000, etc..

        // float    = stores floating point numbers (decimals)
                        // 19.99, -19.99, 5000.00, -5000.00, etc..

        // char     = stores single characters ('a', 'b')
                        // single quotes 'a', 'b', 'c', 'd', etc..


    // ------------------
    // CREATING VARIABLES

        // <type> <variableName> = <value>;

        // assign variable
            int myNum = 69;

        // declare variable
            int noNum;
        // Assign value to variable
            noNum = 18;


    // -----------------
    // Format Specifiers

        // used together with printf() function
        // tells compiler what type of data variable is storing
        // basically a PLACEHOLDER for variable value

        // starts with percentage sign %, follower by character

        // int      = "%d"
        // char     = "%c"
        // float    = "%f"


        int formatNum     = 18;         //  %d
        char formatChar   = "N";        //  %c
        float formatFloat = "18.99";    //  %f

        int main() {printf("%d", formatNum); return 0;}
            // Outputs 18
        int main() {printf("%c", formatChar); return 0;}
            // Outputs N
        int main() {printf("%f", formatFloat); return 0;}
            // Outputs 18.99

        // -------------------------
        // Combine text and variable
            int main() {printf("My age is: %d", formatNum); return 0;}
                // "My age is: 18

            int main() {printf("age is: %d and my letter is %c", formatNum, formatChar); return 0;}
                // "age is: N and letter is N"

        // -----------------------
        // Print Without Variables

            printf("First letter of my name is: %c", 'N');
            printf("My age is: %d", '18');


    // -----------------
    // C Variable Values

        // assign value
        int myNum = 15;     // value is     15
        myNum = 20;         // changed to   20


        // assign variable to variables
        int myNum = 15;
        int MyOtherNum = 25;

        myNum = MyOtherNum;     //  15 is now 25

        printf("%d", myNum);    //  outputs   25


        // copy values to empty variables
        int myNum = 15;
        int myEmptyNum;

        myEmptyNum = myNum;         // empty variable turned to 15

        printf("%d", myEmptyNum);   // outputs 15

        // adding variables
        int x = 5;
        int y = 10;
        int sum = x + y;

        printf("%d", sum);          // outputs 15


    // --------------------------
    // Declare Multiple Variables

        // declare more than one variable of the same type
        // comma-separated

        int x = 5, y = 10, z = 15;

        printf("%d", x + y + z)     // outputs 30 (5 + 10 + 15)


        // assign same value to multiple variables of same type

        int x, y, z;
        x = y = z = 50;

        printf("%d", x + y + z)     // outputs 150 (50 + 50 + 50)


    // ---------------------------------------
    // Variable Names (Identifiers) convention

        // C Variables  =   unique names
        // Unique names =   identifiers
        // use descriptive variable names!

        // Good variable name
        int minutesPerHour = 60;

        // Bad, unclear, vague
        int m = 60;

        // -----------------
        // Usual conventions
            // name can contain
                // letters
                // digits
                // underscores
            // must begin with letter or underscore

            // names are case sensitive
                // myVar    | Not
                // myvar    | The same!

            // names cannot contain
                // whitespace
                // special characters ( !, #, %, etc.. )

            // cannot use reserved words
                // int
                // float
                // char
                // str

    // ---------------------------
    // Real-life variable examples

        // store data of college student

            // Student Data
            int     studentID       = 01410620;
            int     studentAge      = 18;
            float   studentFee      = 3000.69;
            char    studentGrade    = 'A';

            // Print variables
            printf("Student id: %d\n", studentID);
            printf("Student age: %d\n", studentAge);
            printf("Student fee: %f\n", studentFee);
            printf("Student grade: %c", studentGrade);


        // calculate area of rectangle
            // ( length x width )

            int length = 4;
            int width  = 6;
            int area;

            // calculate area
            area = length * width;

            // Print variables
            printf("Length is: %d\n", length);
            printf("Width is: %d\n", width);
            printf("Area of the rectangle is: %d", area);


// ============
// C Data Types

    // variable must be specified data type
    // must use Format Specifier inside printf() to display it


    // Example
        // create variable
        int myNum = 5;
        float myFloatNum = 5.99;
        char myLetter = "D";

        // print variable
        printf("%d\n", myNum);
        printf("%f\n", myFloatNum);
        printf("%c\n", myLetter);

    // ----------------
    // Basic data types


    // Data-Type    |   Size        |   Example
    //  int         |   2 or 4 byes |   1
    //  float       |   4 bytes     |   1.99
    //  double      |   8 bytes     |   1.99
    //  char        |   1 byte      |   'A'

    //  double
        //  stores fractional numbers, containing one or more decimals,
        //  sufficient for storing 15 decimal digits

    // -----------------------
    // Basic Format Specifiers

    //  Format Specifier    |   Data Type
    //  %d or %i            |   int
    //  %f or %F            |   float
    //  %lf                 |   double
    //  %c                  |   char
    //  %s                  |   strings


// ----------------------
// C Character Data Types

    // char data type is to store a SINGLE character
    // must be surrounded by single quotes
        // 'a', 'c', 'd'
        // %c   <-- format specifier to print it

        char myGrade = 'a';
        printf("%c", myGrade);

    // Alternative:
        // use ASCII values to display certain characters
        // not surrounded by single quotes ''

        char a = 65, b = 66, c = 67;
        printf("%c", a);
        printf("%c", b);
        printf("%c", c);

    // NOTE!
        // char MORE than one character ( > 1 )
        // only prints LAST character

        char myText = 'hello';
        printf("%c", myText);
            // ONLY OUTPUTS 'o'

        // Use strings!
        char mytext[] = "Hello";
        printf("%s", mytext);
            // outputs "Hello"

// ------------------
// Numeric Data Types

    // use int when need to store whole number without decimals
        // 35, 1000, etc..

    // float OR double for floating point number
        // 9.99, 3.14515, etc..

    // ---------------
    // Float VS Double

        // the Precision of floating point value indicates
        // how many digits the value can have after the decimal point

        // Precision of float   =    6-7 decimal digits
        // double variables     =    15 digit precision

        // Safer to use Double
        // Twice as much memory as float

        // float    =   8 bytes
        // double   =   4 bytes

    // ------------------
    // scientific numbers
        // "e" indicates the power of 10

        float f1    = 35e3;
        double d1   = 12E4;

        printf("%f\n", f1);
        printf("%lf", d1);

    // -----------------
    // Decimal Precision
        float myFloatNum    = 3.5;
        double myDoubleNum  = 19.99;

        printf("%f\n", myFloatNum); // Outputs 3.500000
        printf("%lf", myDoubleNum); // Outputs 19.990000

        // to remove extra zeros (set decimal precision)
            // use dot ( . ) followed by number that specifies how many
            // digits that should be shown after the decimal points

        float myFloatNum = 3.5;

        printf("%f\n", myFloatNum); // Default will show 6 digits after .
        printf("%.1f\n", myFloatNum); // 1 digit after ( 3.5 )
        printf("%.2f\n", myFloatNum); // 2 digit after ( 3.50 ) .
        printf("%.5f\n", myFloatNum); // 2 digit after ( 3.50000 ) .


// ---------------
// Size-of Operator

    // Recall:
        // Data-Type    |   Size        |   Example
        //  int         |   2 or 4 byes |   1
        //  float       |   4 bytes     |   1.99
        //  double      |   8 bytes     |   1.99
        //  char        |   1 byte      |   'A'

        int myInt;
        float myFloat;
        double myDouble;
        char myChar;

        printf("%lu\n", sizeof(myInt));     //  4
        printf("%lu\n", sizeof(myFloat));   //  4
        printf("%lu\n", sizeof(myDouble));  //  8
        printf("%lu\n", sizeof(myChar));    //  1

        // -----
        // NOTE!

            // we use %lu format specifier to print result
                // INSTEAD OF %d
                // compiler expects sizeof operator to return:
                    // long unsigned int ( %lu )
                    // NOT           int ( %d )

            // Why should we learn size of Data types?
                // memory usage
                // performance

                // char = 1 byte
                // 1000 char = 1000 bytes ( 1 KB of memory )

                // use correct data type for the right purpose!
                    // save memory
                    // improve performance of program


// -----------------
// REAL LIFE EXAMPLE

        // Create variables of different data types
        int items           = 50;
        float cost_per_item = 9.99;
        float total_cost    = items * cost_per_item;
        char currency       = '$';

        // Print variables
        printf("Number of items: %d\n", items);
        printf("Cost per item: %.2f %c\n", cost_per_item, currency);
        printf("Total cost = %.2f %c\n", total_cost, currency);









