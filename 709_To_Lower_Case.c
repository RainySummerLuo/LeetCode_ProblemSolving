/*
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
*/

char* toLowerCase(char* str) {
    int sizeStr = strlen(str);
    for (int i = 0; i < sizeStr; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            char temp = str[i];
            str[i] = (char)((int)temp + 32);
        }
    }
    return str;
}