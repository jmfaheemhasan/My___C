#include <stdio.h>

int main() {
    int num;                                // একটি integer ভেরিয়েবল ঘোষণা
    printf("Enter an integer: ");           // ইউজারকে ইনপুট দিতে বলা হচ্ছে
    scanf("%d", &num);                      // ইউজার যে সংখ্যা দেবে সেটা num এ যাবে
    printf("You entered: %d\n", num);       // ইনপুট করা সংখ্যা আবার প্রিন্ট করবে
    return 0;
}
