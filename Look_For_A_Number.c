#include<stdio.h>
#include<stdlib.h>

void binary_search(int [], int, int, int);

int main(){
int key, size, i;
    int list[25];

    printf("Enter size of a list: ");
    scanf("%d", &size);
    printf("Enter the numbers: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
       // list[i] = rand() % 100;
      //  printf("%d  ", list[i]);
    }

    printf("Enter key to search\n");
    scanf("%d", &key);
    binary_search(list, 0, size, key); // Poner 0 por default


return 0;


}

void binary_search(int list[], int lo, int hi, int key)
{
    int mid;

    if (lo > hi) // Default
    {
        printf("Key not found\n");
        return;
    }
    mid = (lo + hi) / 2;  //por ejemplo 0 + 6 / 2 = 3
    if (list[mid] == key) // primero comprobamos que este en el medio
    {
        printf("Key found\n");
    }
    else if (list[mid] > key) // Si vemos que mid es mas grande que key:
    {
        binary_search(list, lo, mid - 1, key);//Llamamos otravez a la funcion pero le restamos un posicion la lista
    }
    else if (list[mid] < key) // si vemos que mid es mas peque–o hacemos la operacion inversa
    {
        binary_search(list, mid + 1, hi, key);
    }
}
