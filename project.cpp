#include <iostream>
#include <cstdlib> // for malloc and free
using namespace std;

// Define constants
#define TRUE 1
#define FALSE 0
#define Overflow -2
#define OK 1
#define Error 0
#define LIST_INIT_SIZE 100
#define LIST_INCREMENT 10

// Define data types
typedef int Status; // Status is the return type for functions
typedef int ElemType; // Element type of the sequential table

// Sequential table structure
typedef struct {
    ElemType *elem; // Pointer to the array storing table elements
    int length;     // Current length of the table
    int listsize;   // Maximum capacity of the table
} SqList;

// Operation 1: Initialize an empty sequential table
Status InitList(SqList *L) {
    L->elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType)); // Allocate initial memory
    if (!L->elem) return Overflow; // Allocation failed
    L->length = 0; // Initialize table length
    L->listsize = LIST_INIT_SIZE; // Initialize maximum capacity
    return OK;
}

// Operation 2: Destroy the sequential table
void DestroyList(SqList *L) {
    free(L->elem); // Release memory
    L->elem = NULL; // Reset pointer
    L->length = 0; // Reset length
    L->listsize = 0; // Reset capacity
}

// Operation 3: Insert an element into the sequential table at position i
Status ListInsert(SqList *L, int i, ElemType e) {
    if (i < 1 || i > L->length + 1) return Error; // Illegal position
    if (L->length >= L->listsize) { // If the table is full, reallocate memory
        ElemType *newbase = (ElemType *)realloc(L->elem, (L->listsize + LIST_INCREMENT) * sizeof(ElemType));
        if (!newbase) return Overflow; // Reallocation failed
        L->elem = newbase; // Update pointer
        L->listsize += LIST_INCREMENT; // Update capacity
    }
    for (int j = L->length - 1; j >= i - 1; j--) {
        L->elem[j + 1] = L->elem[j]; // Shift elements to make room for new element
    }
    L->elem[i - 1] = e; // Insert element
    L->length++; // Update length
    return OK;
}

// Auxiliary function: Display elements of the sequential table
void Print(SqList *L) {
    for (int i = 0; i < L->length; i++) {
        cout << L->elem[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    SqList q; // Declare sequence table variable
    SqList *L = &q; // Declare pointer variable pointing to a sequential table
    InitList(L); // Initialize the sequential table

    // Insert elements into the sequential table
    ListInsert(L, 1, 10);
    ListInsert(L, 2, 20);
    ListInsert(L, 3, 30);
    ListInsert(L, 4, 40);

    // Display the sequential table
    Print(L);

    // Destroy the sequential table
    DestroyList(L);

    return 0;
}
