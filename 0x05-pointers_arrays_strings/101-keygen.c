#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void) {
char password[PASSWORD_LENGTH + 1]; // leave room for null terminator
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};:'\"\\|,.<>?/";
const int charset_size = sizeof(charset) - 1; // account for null terminator
srand(time(NULL)); // seed random number generator with current time
for (int i = 0; i < PASSWORD_LENGTH; i++) {
password[i] = charset[rand() % charset_size]; // pick a random character from charset
}
password[PASSWORD_LENGTH] = '\0'; // add null terminator to end of password string
printf("Random password: %s\n", password);
return 0;
}
