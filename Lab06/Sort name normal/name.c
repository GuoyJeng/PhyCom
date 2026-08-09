#include <stdio.h>
#include <ctype.h>

int main() {
    char name[20][61];

    // 1. Read input safely
    for (int i = 0; i < 20; i++) {
        if (scanf(" %60[^\n]", name[i]) != 1) {
            break;
        }
    }

    // 2. Title Case Conversion
    for (int i = 0; i < 20; i++) {
        int new_word = 1;
        for (int j = 0; name[i][j] != '\0'; j++) {
            if (name[i][j] == ' ') {
                new_word = 1;
            } else if (new_word) {
                name[i][j] = toupper((unsigned char)name[i][j]);
                new_word = 0;
            } else {
                name[i][j] = tolower((unsigned char)name[i][j]);
            }
        }
    }

    // 3. Alphabetical Sort & Swap Count directly inside main()
    for (int i = 0; i < 19; i++) {
        for (int j = i + 1; j < 20; j++) {
            // Find the first character where the two strings differ
            int k = 0;
            while (name[i][k] != '\0' && name[i][k] == name[j][k]) {
                k++;
            }

            // If name[i] comes after name[j] alphabetically, swap them
            if ((unsigned char)name[i][k] > (unsigned char)name[j][k]) {
                // Swap string contents character-by-character
                for (int m = 0; m < 61; m++) {
                    char temp = name[i][m];
                    name[i][m] = name[j][m];
                    name[j][m] = temp;
                }
            }
        }
    }

    // 4. Print sorted names and swap count
    for (int i = 0; i < 20; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}
