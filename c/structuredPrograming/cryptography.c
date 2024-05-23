#include <stdio.h>

// Program needs to enxrypt and decrytp
//  Answer of 1234 is 7701

void separateDigits(int *digits, int num) {
  digits[0] = num / 1000;
  digits[1] = (num % 1000) / 100;
  digits[2] = (num % 100) / 10;
  digits[3] = (num % 10);
}

int combineDigits(int *digits) {
  int combinedDigits;

  for (int i = 0; i < 4; i++) {
    if (i == 0) {
      combinedDigits = digits[i] * 1000;
    }

    if (i == 1) {
      combinedDigits += digits[i] * 100;
    }

    if (i == 2) {
      combinedDigits += digits[i] * 10;
    }

    if (i == 1) {
      combinedDigits += digits[i];
    }
  }

  return combinedDigits;
}

int cypher(int num) { return (num + 7) % 10; }

int encrypt(int *digits) {
  int encryptedNum;
  int encrytionHolder[4];

  for (int i = 0; i < 4; i++) {
    int encryptedNum = cypher(digits[i]);

    if (i == 0) {
      encrytionHolder[2] = encryptedNum;
      continue;
    }

    if (i == 1) {
      encrytionHolder[3] = encryptedNum;
      continue;
    }

    encrytionHolder[i] = encryptedNum;
  }

  return combineDigits(encrytionHolder);
}

int main(void) {
  int fourDigitInteger;
  int digits[4];

  printf("Enter four digit integer: ");
  scanf("%d", &fourDigitInteger);

  if (999 > fourDigitInteger || fourDigitInteger > 9999) {
    printf("iInteger must be four digits!");
    return 0;
  }

  separateDigits(digits, fourDigitInteger);

  printf("Encrypted numbers: %d\n", encrypt(digits));
}
