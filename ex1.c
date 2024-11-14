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
  int num, position;
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int bit = (num >> position) & 0x1;
  printf("The bit in position %d of number %d is: %d \n",position, num,bit);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int num1, position1;
  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &position1);
  int mask = (1 << position1);
  int bitOnNum = num1 | mask;
  int bitOffNum = num1 & ~mask;
  printf("Number with bit %d set to 1: %d \n", position1, bitOnNum);
  printf("Number with bit %d set to 0: %d \n",position1, bitOffNum);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int num2, position2;
  printf("Please enter a number:\n");
  scanf("%d", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &position2);
  int mask2 = (1 << position2);
  int toggledNum = num2 ^ mask2;
  printf("Number with bit %d toggled: %d \n", position2, toggledNum);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int num3;
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  int isEven = (num3 & 0x1) ^ 0x1;
  printf("%d \n", isEven);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num4, num5;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num4);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num5);
  int sum = num4 + num5;
  printf("The sum in hexadecimal: %X \n", sum);
  int thirdBit = (sum >> 3) & 0x1;
  int fifthBit = (sum >> 5) & 0x1;
  int seventhBit = (sum >> 7) & 0x1;
  int eleventhBit = (sum >> 11) & 0x1;
  printf("The 3,5,7,11 bits are: %d%d%d%d \n",thirdBit ,fifthBit ,seventhBit ,eleventhBit);
  printf("Bye!\n");
  
  return 0;
}
