/*
Count the number of prime numbers less than a non-negative number, n.
*/

int countPrimes(int n) {
    int prime = 1;
    uint8_t* isprime = calloc(n, sizeof(uint8_t));
    if (n <= 2) {
        return 0;
    }
    for (int k = 3; k < sqrt(n); k += 2) {
        if (isprime[k]) {
            continue;
        }
        for (int j = k * k; j < n; j += 2 * k) {
            isprime[j] = 1;
        }
    }
    for (int l = 3; l < n; l += 2) {
        if (!isprime[l]) {
            prime++;
        }
    }
    return prime;
}