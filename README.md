#Lab 3

Problem - You will prompt a user for a month, a day and a year. You will then tell the user how many days
since January 1 of that year the input date is.

For example if the user inputs a 3 for the month, a 2 for the day, and 2000 for the year the program outputs the
number of days as being 62. Note 2000 is a leap year. Therefore you must test to see if a year is a leap year
when doing this problem.

The three rules which the Gregorian calendar uses to determine leap year are as follows:
1. Years divisible by four are leap years, unless...
2. Years also divisible by 100 are not leap years, except...**
3. Years divisible by 400 are leap years. **

** Combining rules 2 & 3: Centennial years that are not divisible by 400 are not leap years.
**Another way of looking at the definition of a leap year:
Leap years fall on any year that either can be evenly divided by 400 or evenly divided by 4 and not
evenly divided by 100.
Therefore the years 1900, and 2100 are NOT leap years.

Method - Use if - else statements to decide:
1. How many days to add given the month
2. Whether to add an additional day for leap year.
3. Don't forget to add in the days for the current date within a month

Ex. if the user inputs month = 4, day = 22, year = 1995
Since 1995 is not a leap year add 90 days (total for January, February, and March) then to that add 22 for the
number of days in April for a total of 112 days.

Output - Organize your prompts, and output in a neat orderly fashion. Print a statement telling whether the
year is a leap year and another statement about the number of days since January 1 of that year has past.
