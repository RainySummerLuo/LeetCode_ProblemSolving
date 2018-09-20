/*
We are given two strings, A and B.
A shift on A consists of taking string A and moving the leftmost character to the rightmost position. 
For example, if A = 'abcde', then it will be 'bcdea' after one shift on A. 
Return True if and only if A can become B after some number of shifts on A.
*/

bool rotateString(char* A, char* B) {
    int sizeA = strlen(A);
    int sizeB = strlen(B);
    int position = 0;
    char temp = ' ';
    if (strcmp(A, "") == 0 && strcmp(B, "") == 0) {
        return true;
    }
    for (int i = 0; i < sizeA; i++) {
        temp = A[0];
        for (int j = 0; j < sizeA - 1; j++) {
            A[j] = A[j + 1];
        }
        A[sizeA - 1] = temp;
        if (strcmp(A, B) == 0) {
            return true;
        }
    }
    return false;
}