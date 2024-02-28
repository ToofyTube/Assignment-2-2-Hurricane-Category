int main(void) {
  int number;
  printf("Enter the wind speed: ");
  scanf("%d", &number);
  if (number <= 74)
    printf("Not a Hurricane\n");
  else if (number > 74 && number <= 96)
    printf("Category Two Hurricane\n");
  else if (number > 96 && number <= 111)
    printf("Category Three Hurricane\n");
  else if (number > 111 && number <= 130)
    printf("Category Four Hurricane\n");
  else
    printf("Category Five Hurricane\n");
  return 0;
}