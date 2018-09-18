int numJewelsInStones(char* J, char* i)  {
    char stone = ' ';
    int count = 0;
    for (int k = 0; k < 50; i++) {
        if (i[k] == "\0") {
            break;
        }
        if (stone != i[k]) {
            for (int l = 0; l < 50; l++) {
                if (J[l] == "\0") {
                    break;
                }
                if (i[k] == J[l]) {
                    count++;
                    break;
                }
            }
            stone = i[k];
        }
    }
    return count;
}