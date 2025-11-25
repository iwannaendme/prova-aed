#include <iostream>
int buscaSequencial(int vetor[], int tamanho, int valor)
{
  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[i] == valor)
      return i; // retorna índice se encontrado
  }
  return -1; // não encontrado
}
int main()
{
  int vetor[] = {4, 8, 15, 16, 23, 42};
  int valor = 15;
  int pos = buscaSequencial(vetor, 6, valor);
  if (pos != -1)
    std::cout << "Valor : " << valor << " encontrado na posicao : " << pos << ".\n";
  else
    std::cout << " Valor nao encontrado.\n";
  return 0;
}

#include <iostream>
int buscaBinaria(int vetor[], int tamanho, int valor)
{
  int inicio = 0, fim = tamanho - 1, meio;
  while (inicio <= fim)
  {
    meio = (inicio + fim) / 2;
    if (vetor[meio] == valor)
      return meio; // valor encontrado
    else if (vetor[meio] < valor)
      inicio = meio + 1; // busca na metade superior
    else
      fim = meio - 1; // busca na metade inferior
  }
  return -1; // não encontrado
}

int main()
{
  int vetor[] = {3, 6, 9, 12, 15, 18, 21};
  int valor = 15;
  int pos = buscaBinaria(vetor, 7, valor);
  if (pos != -1)
    std::cout << "Valor: " << valor << " encontrado na posicao : " << pos << ".\n";
  else
    std::cout << "Valor nao encontrado.\n";
  return 0;
}
