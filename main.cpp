/*-------------------------------------------------------}
 * Dato de Entrada: n (int) es el tamanio del array
 *                  dato  (int) es el dato a buscar
 * Dato de salida:  a : es un arreglo de enteros
 *                  adePosiciones : es un arreglo  o "No hay ocurrencias"
 * */

#include "UFunciones.h"

int main()
{
  int n;
  int * pA=nullptr;
  int dato;

  srand(time(nullptr));
  cout << "Numero de elementos del arreglo : ";
  cin >> n;
  pA = dimensionar(n);
  llenarDatos(pA, n);
  imprimirArreglo(pA,n);
  cout << "\n\n";
  cout << "Dato a buscar : ";
  cin >> dato;
  int veces = buscarDato(dato, pA, n);
  if(veces ==0)
      cout << "No hay ocurrencias!. Chao!!!";
  else
  {
      int *pNuevo = new int[veces];
      int indiceNuevo =0;
      for(int i=0; i<n; i++)
          if (dato == pA[i]) {
              pNuevo[indiceNuevo] = i;
              indiceNuevo++;
          }
      cout << "\n";
      imprimirArreglo(pNuevo, veces);
      //--- devuelven la memoria del arreglo de las posiciones
      delete []pNuevo;
      pNuevo = nullptr;
  }
  delete []pA;
  pA = nullptr;
    return 0;
}
