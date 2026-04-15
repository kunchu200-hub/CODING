#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>

void NumbertoN(int n);
void printAlphabet(char alphabet);
int sumof(int n);
int SUMdigits(int n);
int sumofODD(int n);
int Primenumber(int n);
void multiplicationTable(int n);
void drawRectangle(int w, int h);
void drawTriangle(int h);
void drawChristmasTree(int h);
int sumofarray (int n);
int second_largest_element(int arraysize[], int n);
void MergedArrays(int size1, int size2);
void Array_rverse(int n);
void RowstoColumns(int rows, int columns, int Array1[][10], int New_Array[][10]);
void Max_Mini(int n);
int countnumber(int arraysize[], int n, int target, int count);
int Ascendingorder(int arraysize[], int n);
void shiftarray(int arraysize[], int n);
void character_reversed(int i, int j, int length);


int main()
{
    int choice;

    while (1) {
        printf("\n >>>>>MENU<<<<< \n");
        printf("1. Print numbers from 1 to n\n");
        printf("2. Prints alphabet from c to n and from E to P\n");
        printf("3. Sum numbers up to n\n");
        printf("4. Sum digits of a number\n");
        printf("5. Sum odd numbers up to n\n");
        printf("6. Check prime\n");
        printf("7. Multiplication table\n");
        printf("8. Draw rectangle\n");
        printf("9. Draw triangle\n");
        printf("10. Draw Christmas tree\n");
        printf("11. Calculates the sum of all array cells\n");
        printf("12. Find the second largest element from the array\n");
        printf("13. Merge arrays into a single array\n");
        printf("14. Prints the array in reverse order\n");
        printf("15. Swap rows and columns in a 2D array\n");
        printf("16. Find maximun and minimum from an array\n");
        printf("17. Count the target number in an array\n");
        printf("18. Checks if the array is sorted in ascending order\n");
        printf("19. Moving the first element to the end of an array. \n");
        printf("20. Save characters 'Never odd or even' in the opposite order in another array\n");
        printf("0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting menu...\n");
            break;
        }

        int n, i, j, w, h, min, size1, size2, rows, columns, target, count, length, arraysize;
        char alphabet;

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);
                NumbertoN(n);
                break;

            case 2:
                printAlphabet(alphabet);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);
                sumof(n);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);
                SUMdigits(n);
                break;

            case 5:
                printf("Enter n: ");
                scanf("%d", &n);
                sumofODD(n);
                break;

            case 6:
                printf("Enter number: ");
                scanf("%d", &n);
                if (Primenumber(n))
                    printf("%d is prime number.\n", n);
                else
                printf("%d is NOT prime number.\n", n);
                break;

            case 7:
                printf("Enter a number for its multiplication table: ");
                scanf("%d", &n);
                multiplicationTable(n);
                break;

            case 8:
                printf("Console representation of a rectangle\n");
                printf("Width: ");
                scanf("%d", &w);
                printf("Height: ");
                scanf("%d", &h);
                drawRectangle(w, h);
                break;

            case 9:
                printf("Console representation of a triangle\n");
                printf("Height: ");
                scanf("%d", &h);
                drawTriangle(h);
                break;

            case 10:
                printf("Height: ");
                scanf("%d", &h);
                 if (h < 5) {
                    printf("The tree is too SMALL.\n");
                    printf("Returning to default height = 5.\n", h);
                    h = 5;
 }
                 else if (h >60){
                     printf("The tree is too BIG.\n");
                     printf("Dispaying maximum height = 60.\n", h);
                     h = 60;
}
                     drawChristmasTree(h);
                     break;

            case 11:
                printf("How many elements do you want to store?:\n");
                scanf("%d", &n);
                sumofarray (n);
                break;

            case 12:
                int arraysize[100];
                printf("Enter the size of the array: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++)
                scanf("%d", &arraysize[i]);
                printf("Second largest = %d\n", second_largest_element(arraysize, n));
                break;

             case 13:
                printf("Enter the size of the first array: ");
                scanf("%d", &size1);
                printf("Enter the size of the second array: ");
                scanf("%d", &size2);
                MergedArrays(size1, size2);
                break;

             case 14:
                printf("How many elements do yoy want in the array?: ");
                scanf("%d", &n);
                Array_rverse(n);
                break;

             case 15:
                int rows, columns;
                int Array1[10][10], New_Array[10][10];
                printf("Rows: ");
                scanf("%d", &rows);
                printf("Coloumns: ");
                scanf("%d", &columns);
                printf("Enter the elements:\n");
                for (int i = 0; i < rows; i++)
                for (int j = 0; j < columns; j++)
                scanf("%d", &Array1[i][j]);
                RowstoColumns(rows, columns, Array1, New_Array);
                break;

              case 16:{
                 printf("How many elements do you want in the array: ");
                 scanf("%d", &n);
                 Max_Mini(n);
}                break;

              case 17:
                 printf("How mnay elements do you want in the array?: ");
                 scanf("%d", &n);
                 for (i = 0; i < n; i++) scanf("%d", &arraysize[i]);
                 printf("Target: ");
                 scanf("%d", &target);
                 printf(" The number appears %d times\n", countnumber(arraysize, n, target, count));
                 break;

              case 18:
                 printf("Enter the number of elements in the array: ");
                 scanf("%d", &n);
                 for (i = 0; i < n; i++)
                 scanf("%d", &arraysize[i]);
                 if (Ascendingorder(arraysize, n))
                 printf("The array is in ascending order\n");
                 else printf("The array is not in ascending order\n");
                 break;

              case 19:
                 printf("Enter the number of element in the array: ");
                 scanf("%d", &n);
                 for (i = 0; i < n; i++)
                 scanf("%d", &arraysize[i]);
                 shiftarray(arraysize, n);
            break;

              case 20:
                 printf("Never odd or even in reverse order\n");
                 character_reversed(i, j, length);
                 break;

              default:
                 printf("Invalid choice! Try again.\n");

     return 0;
}
}
}


// No. 1
void NumbertoN(int n){

for (int i = 1; i <= n; i++)
    printf("%d ", i);
    printf("\n");
}


//No. 2
void printAlphabet(char alphabet){
    for (alphabet = 'c'; alphabet <= 'n'; alphabet++){
    printf("%c ", alphabet);
}
    printf("\n");
    for (alphabet = 'E'; alphabet <= 'P'; alphabet++)
    printf("%c ", alphabet);
    printf("\n");
}


// No. 3
int sumof(int n){
    int sum = 0;
    if (n <= 0) {
    printf("Please enter a number > 0. \n");
}
       else {
    for (int i = 1; i <= n; ++i)
        sum += i;
    printf("Sum of numbers from 1 to %d = %d\n", n, sum);
}

}


// No.4
int SUMdigits(int n){
    int sum, digit = 0;

     while (n != 0) {
     digit = n  % 10;
     sum += digit;
     n /= 10;
}
   printf("Sum of digits: %d\n", sum);
}


// No.5
int sumofODD(int n){
    int sum = 0;

    for(int i = 1; i <= n; i++){
    if(i % 2 != 0){
    sum += i;
}
}
    printf("Sum of odd numbers = %d\n", sum);
}


// No.6
int Primenumber(int n){
    bool prime_number = true;
    if (n <= 1 ){
    prime_number = false;
}
    else {
    for (int i = 2; i <= n / 2; ++i) {
    if(n % i == 0 ) {
    prime_number = false;
    break;
}
}
}
}


// No.7
void multiplicationTable(int n){

    if (n < 0) {
    printf("Enter a positive integer: ");
    scanf("%d", &n);
}

    for (int i =1; i <= 10; i++){
    int product = n * i;
    printf("%d * %d = %d\n", n, i, product);

}
}


// No.8
void drawRectangle(int w, int h){
    if (h < 1 || w < 1){
       printf("Width and height should at least be 1");
}
    for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
    if (i == 0 || i == h - 1 || j == 0 || j == w - 1) {
     printf("*");
}
    else {
    printf(" ");
}
}
    printf("\n");
}
}


// No.9
void drawTriangle(int h){
    if (h < 1){
    printf("Height should at least be 1");
}
    for (int i = 0; i < h; i++) {
    for (int j = 0; j <= h - i; j++) {
      printf(" ");
}
    for (int r = 1; r <= (2 * i - 1); r++) {
    printf("*");
}
     printf("\n");
}
}


// No.10
void drawChristmasTree(int h){
    int i, j, t, w, b = 0;
    for (i = 0; i < h; i++) {
    for (j = 0; j < h - i - 1; j++) {
    printf(" ");
}
    for (b = 0; b < 2 * i + 1; b++) {
    printf("`");
}
    printf("\n");
}
    for (t = 0; t < 5; t++) {
    for (w = 0; w < h - 2; w++) {
    printf(" ");
}
    printf("---\n");
}
}


// No.11
int sumofarray (int n){
    int sum = 0;
    int arraysize[n];
    for (int i = 0; i < n; i++) {
        printf(" Value for Element %d: ", i + 1);
        scanf("%d", &arraysize[i]);
}
    for (int i = 0; i < n; i++) {
       sum += arraysize[i];
}
    printf("The sum of all array cells is: %d\n", sum);
}


// No.12
int second_largest_element(int arraysize[], int n) {
    if (n < 2) {
    return -1;
}
    int Highest_value = INT_MIN, Second_highest_value = INT_MIN;
    for (int i = 0; i < n; i++) {
    if (arraysize[i] > Highest_value) {
    Second_highest_value = Highest_value;
    Highest_value = arraysize[i];
}
    else if (arraysize[i] > Second_highest_value && arraysize[i] != Highest_value) {
    Second_highest_value = arraysize[i];
}
}
    return Second_highest_value;
}



// No.13
void MergedArrays(int size1, int size2){
     int *array_1 = (int *)malloc(size1 * sizeof(int));
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
    scanf("%d", &array_1[i]);
}
    int *array_2 = (int *)malloc(size2 * sizeof(int));
    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
    scanf("%d", &array_2[i]);
}
    int mergedSize = size1 + size2;
    int *mergedArray = (int *)malloc(mergedSize * sizeof(int));
    for (int i = 0; i < size1; i++) {
    mergedArray[i] = array_1[i];
}
    for (int i = 0; i < size2; i++) {
    mergedArray[size1 + i] = array_2[i];
}
    printf("\nThe merged array is:\n");
    for (int i = 0; i < mergedSize; i++) {
    printf("%d ", mergedArray[i]);
}
    free(array_1);
    free(array_2);
    free(mergedArray);
}


// No.14
void Array_rverse(int n){
     int arraysize[n];
     printf("Enter %d the elements:\n", n);
     for (int i = 0; i < n; i++) {
     printf("Element %d: ", i + 1);
     scanf("%d", &arraysize[i]);
}
     printf("\nArray elements in reverse order:\n");
     for (int i = n- 1; i >= 0; i--) {
     printf("%d ", arraysize[i]);
}
     printf("\n");
}


// No.15
void RowstoColumns(int rows, int columns, int Array1[][10], int New_Array[][10]) {
    for (int i = 0; i < rows; i++)
    for (int j = 0; j < columns; j++)
    New_Array[j][i] = Array1[i][j];
    printf("Swapped:\n");
    for (int i = 0; i < columns; i++) {
    for (int j = 0; j < rows; j++)
    printf("%d ", New_Array[i][j]);
    printf("\n");
}
}

// No.16
void Max_Mini(int n){
    int arraysize[n];
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
    printf("Element %d: ", i + 1);
    scanf("%d", &arraysize[i]);
 }
    int maximum = arraysize[0];
    int minimum = arraysize[0];
    for (int i = 1; i < n; i++) {
    if (arraysize[i] > maximum) {
         maximum = arraysize[i];
}
    if (arraysize[i] < minimum) {
         minimum = arraysize[i];
}
}
    printf("\nMaximun amongst the array is %d\n", maximum);
    printf("Minimun amongst the array is %d\n", minimum);
}


// No.17
int countnumber(int arraysize[], int n, int target, int count) {

     for (int i = 0; i < n; i++)
     if (arraysize[i] == target)
     count++;
     return count;
}

// No.18
int Ascendingorder(int arraysize[], int n) {
    for (int i = 0; i < n - 1; i++)
    if (arraysize[i] > arraysize[i + 1])
    return 0;
    return 1;
}


// No.19
void shiftarray(int arraysize[], int n) {
    int element1 = arraysize[0];
    for (int i = 0; i < n - 1; i++)
    arraysize[i] = arraysize[i + 1];
    arraysize[n - 1] = element1;
    printf("Array after shift:: ");
    for (int i = 0; i < n; i++) printf("%d ", arraysize[i]);
    printf("\n");
}



// No.20
void character_reversed(int i, int j, int length){
   char original_array[] = "Never odd or even";
    char reversed_array[50] = "";
    length = strlen(original_array);
    for (i = 0,j = length - 1; i < length; i++, j--) {
    reversed_array[i] = original_array[j];
}
    reversed_array[length] = '\0';
    printf("Original array: %s\n", original_array);
    printf("Reversed array: %s\n", reversed_array);
}













