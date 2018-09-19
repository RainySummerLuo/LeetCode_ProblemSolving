/*
Given a word, you need to judge whether the usage of capitals in it is right or not.
We define the usage of capitals in a word to be right when one of the following cases holds:
1. All letters in this word are capitals, like "USA".
2. All letters in this word are not capitals, like "leetcode".
3. Only the first letter in this word is capital if it has more than one letter, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.
*/

bool detectCapitalUse(char* word) {
    int wSize = strlen(word);
    int Ucount = 0;
    int Lcount = 0;
    for (int i = 0; i < wSize; i++) {
        if (word[i] >= 65 && word[i] <= 90) {
            Ucount++;
        }
    }
    Lcount = wSize - Ucount;
    if (Ucount == wSize || Lcount == wSize) {
        return true;
    }
    if ((word[0] >= 65 && word[0] <= 90) && Lcount == wSize - 1) {
        return true;
    }
    return false;
}