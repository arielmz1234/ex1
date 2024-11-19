/******************
Name: ariel mizrahi
ID: 213458821
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num, position;//num will hold the number I want to check his bit and position will hold the position of the bit
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int bit = (num >> position) & 0x1; /*here, to see what bit of the input number is
  in the input position I shift the binary number to right position times,
  and then check if the rightmost bit is 0 or 1 by using & with the number 1*/
  printf("The bit in position %d of number %d is: %d \n",position, num,bit);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int num1, position1; /*num1 will hold the number I want to set to 1 his bit and position
  will hold the position of the bit I want to set to 1;*/
  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &position1);
  int mask = (1 << position1); //mask holds the number 1 shifted to the left position times to use later
  int bitOnNum = num1 | mask; //using the mask I set the bit in the input position of the number to 1
  int bitOffNum = num1 & ~mask; //using the mask I set the bit in the input position of the number to 0
  printf("Number with bit %d set to 1: %d \n", position1, bitOnNum);
  printf("Number with bit %d set to 0: %d \n",position1, bitOffNum);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int num2, position2; /*num2 will hold the number I want to toggle his bit and position
  will hold the position of the bit I want to toggle;*/
  printf("Please enter a number:\n");
  scanf("%d", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &position2);
  int mask2 = (1 << position2); //mask2 holds the number 1 shifted to the left position times to use later
  int toggledNum = num2 ^ mask2;//toggledNum holds the number with toggled bit in the input position
  printf("Number with bit %d toggled: %d \n", position2, toggledNum);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int num3; //num3 holds the number I want to check his parity
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  int isEven = (num3 & 0x1) ^ 0x1; /*here using number & 1 returns 0 if the number is odd and 1 if the
  number is even, so to change it to fit the instruction I use ^ with 1 and that changes the rightmost bit*/
  printf("%d \n", isEven);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num4, num5; //num4 and num5 will hold the 2 octal numbers I want to sum and print in hex
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num4);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num5);
  int sum = num4 + num5;
  printf("The sum in hexadecimal: %X \n", sum);
  int thirdBit = (sum >> 3) & 0x1; /*thirdBit holds the third bit of the number,
  by shifting the sum 3 times to the right and using & with 1 we get the third bit value */
  int fifthBit = (sum >> 5) & 0x1;/*fifthBit holds the fifth bit of the number,
  by shifting the sum 5 times to the right and using & with 1 we get the fifth bit value */
  int seventhBit = (sum >> 7) & 0x1;/*seventhBit holds the seventh bit of the number,
  by shifting the sum 7 times to the right and using & with 1 we get the seventh bit value */
  int eleventhBit = (sum >> 11) & 0x1;/*eleventhBit holds the eleventh bit of the number,
  by shifting the sum 11 times to the right and using & with 1 we get the eleventh bit value */
  printf("The 3,5,7,11 bits are: %d%d%d%d \n",thirdBit ,fifthBit ,seventhBit ,eleventhBit);
  printf("Bye!\n");
  
  return 0;
}
