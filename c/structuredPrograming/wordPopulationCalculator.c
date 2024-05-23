#include <stdio.h>

float calculateGrowth(float population, float growthPercent, int years) {
  float growth = population;
  float populationGrowthIndex = growthPercent / 100;

  for (int i = 0; i < years; i++) {
    growth += growth * populationGrowthIndex;
  }

  return growth;
}

int main(void) {
  float populationGrowthPercent, populationInBillions;

  printf("What is the current population in billions? ");
  scanf("%f", &populationInBillions);

  printf("What is the current growth rate in percent? ");
  scanf("%f", &populationGrowthPercent);

  float growthInOneYear =
      calculateGrowth(populationInBillions, populationGrowthPercent, 1);
  float growthInTwoeYears =
      calculateGrowth(populationInBillions, populationGrowthPercent, 2);
  float growthInThreeYears =
      calculateGrowth(populationInBillions, populationGrowthPercent, 3);
  float growthInFourYears =
      calculateGrowth(populationInBillions, populationGrowthPercent, 4);
  float growthInFiveYears =
      calculateGrowth(populationInBillions, populationGrowthPercent, 5);

  printf("------------------------------------------------");

  printf("Pupulation growth after one year will be: %.2f\n", growthInOneYear);
  printf("Pupulation growth after two years will be: %.2f\n",
         growthInTwoeYears);
  printf("Pupulation growth after three years will be: %.2f\n",
         growthInThreeYears);
  printf("Pupulation growth after four years will be: %.2f\n",
         growthInFourYears);
  printf("Pupulation growth after five years will be: %.2f\n",
         growthInFiveYears);
}
