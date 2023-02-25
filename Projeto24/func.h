void insertNumberOfList(float *listHead)
{
int i;
  for (i = 0; i < 10; i++)
  {
    float number = -1;
    if (listHead[i] == -1)
    {
      while (number < 0)
      {
        printf("\nDigite um Número Positivo a ser inserido na lista: ");
        scanf("%f", &number);
      }
      listHead[i] = number;
      break;
    }
  }
}

void printNumbersOfList(float *listHead)
{
int i;
  printf("\n------------------\nLista dos Números:\n\n");
  for (i = 0; i < 10; i++)
  {
    printf("[%d] - ", i + 1);
    if (listHead[i] != -1)
    {
      printf("%.2f\n", listHead[i]);
    }
    else
    {

      printf("Sem Número\n");
    }
  }
  printf("\n------------------\n\n");
}

void averageOfList(float *listHead)
{
  int i;
  float sum = 0;
  for (i = 0; i < 10; i++)
  {
    if (listHead[i] == -1)
    {
      break;
    }
    sum += listHead[i];
  }
  printf("\n\nA média dos números é: %.2f\n\n", sum / i + 1);
}

void higherNumberOfList(float *listHead)
{
  int i;
  float higherNumber = -1;
  for (i = 0; i < 10; i++)
  {
    if (listHead[i] == -1)
    {
      break;
    }
    if (listHead[i] > higherNumber)
    {
      higherNumber = listHead[i];
    }
  }
  if (higherNumber == -1)
  {
    printf("\n\nNão há números na lista.\n\n");
  }
  else
  {
    printf("\n\nO maior número é: %.2f\n\n", higherNumber);
  }
}

void manageOptions(int option, float *listHead)
{
	
  switch (option)
  {
  case 1:
    insertNumberOfList(listHead);
    break;

  case 2:
    printNumbersOfList(listHead);
    break;

  case 3:
    averageOfList(listHead);
    break;

  case 4:
    higherNumberOfList(listHead);
    break;
  case 0:
    break;

  default:
    printf("Valor invalido!\n");
  }
}
