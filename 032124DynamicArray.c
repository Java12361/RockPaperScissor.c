#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int *array;
    size_t size;
    size_t capacity;
} DyArray;

void initArray(DyArray *arr, size_t initial_capacity) 
{
    arr->array = (int *)malloc(initial_capacity * sizeof(int));
    arr->size = 0;
    arr->capacity = initial_capacity;
}

void resizeArray(DyArray *arr) 
{
    size_t new_capacity = arr->capacity * 2;
    arr->array = (int *)realloc(arr->array, new_capacity * sizeof(int));
    arr->capacity = new_capacity;
}

void addElement(DyArray *arr, int element) 
{
    if (arr->size == arr->capacity) {
        resizeArray(arr);
    }
    arr->array[arr->size] = element;
    arr->size++;
}

void removeElement(DyArray *arr, size_t index) 
{
    if (index < arr->size) {
        for (size_t i = index; i < arr->size - 1; i++) {
            arr->array[i] = arr->array[i + 1];
        }
        arr->size--;
    }
}

void freeArray(DyArray *arr) 
{
    free(arr->array);
    arr->array = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

int main() {
    DyArray arr;
    initArray(&arr, 4);

    addElement(&arr, 10);
    addElement(&arr, 20);
    addElement(&arr, 30);
    addElement(&arr, 40);
    addElement(&arr, 50);

    for (size_t i = 0; i < arr.size; i++) {
        printf("%d ", arr.array[i]);
    }
    printf("\n");

    removeElement(&arr, 2);

    for (size_t i = 0; i < arr.size; i++) {
        printf("%d ", arr.array[i]);
    }
    printf("\n");

    freeArray(&arr);

    return 0;
}