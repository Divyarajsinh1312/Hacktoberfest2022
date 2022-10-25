# Python program to print the
# following stars pattern
'''
Enter number of rows:8
        *
       * *
      * * *
     * * * *
    * * * * *
   * * * * * *
  * * * * * * *
 * * * * * * * *
'''
# define a user defined function to
# print star pattern
def star_patterns(n):
    space = 2 * n - 2
    for i in range(0, n):
        for j in range(0, space):
            print(" ",end="")
        space = space - 1
        for j in range(0, i + 1):
            print("*", end=" ")
        print()

# Input number of star rows
n = int(input("Enter number of Rows in Star Pattern:"))
# call the function to print the star pattern
star_patterns(n)
