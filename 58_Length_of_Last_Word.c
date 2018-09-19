/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only.
*/

int lengthOfLastWord(char* s) {
    int Asize = strlen(s) - 1;
    int count = 0;
    int word = 0;
    for (int i = Asize; i >= 0; i--) { 
        if (s[i] == ' ' && count == 0)
            continue;
        if (s[i] == ' ' && count != 0)
            break;
        count++;
    }
    return count;
}