#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int arr[10] = {0};

bool checkprime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int isFibonacci(int num) {
    int a ;
    int b;
    int temp;
    a = 0;
    b = 1;
    if (num == 0){
        return 1;
    }
    while (b < num) {
        temp = a;
        a = b;
        b = temp + b;
    }
    if (b == num){
        return 1;
    } else {
        return 0;
    }
}

int checkfibonsum(int n){
    int sum = 0;
    int digit;
    while (n > 0){
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    if (isFibonacci(sum)){
        return 1;
    } else {
        return 0;
    }
}

int is_palindrome(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int can_form_palindrome(char *s) {
    if (is_palindrome(s)) {
        return 0;
    }
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        char old_char = s[i];
        for (char c = 'a'; c <= 'z'; c++) {
            s[i] = c;
            if (is_palindrome(s)) {
                s[i] = old_char;
                return 1;
            }
        }
        s[i] = old_char;
    }
    return 0;
}

bool is_num(char *string){
    if (string[0] == '0'){
        return false;
    }
    int len = strlen(string);
    for (int i = 0; i < len; i++){
        if (isalpha(string[i])){
            return false;
        }
    }
    return true;
}

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}

int countWords(char* str) {

  int count = 0;
  char* token2 = strtok(str, " ");
  
  while (token2 != NULL) {
    count++;
    token2 = strtok(NULL, " ");
  }

  return count;
}

void standardlizename(char *string) {
    char strng[1000];
    strcpy(strng, string);

    char result[1000] = "";
    char *token = strtok(strng, " ");

    while (token != NULL) {
        char *word = token;
        for (int i = 0; word[i]; i++) {
            word[i] = tolower(word[i]);
        }
        if (word[0] >= 'a' && word[0] <= 'z') {
            word[0] = toupper(word[0]);
        }
        strcat(result, word);
        strcat(result, " ");
        token = strtok(NULL, " ");
    }

    printf("%s\n", result);
}

int check_prime_digit(int number){
    int prime_value = 1;
        while (number > 0){
            int digit = number % 10;
            if (checkprime(digit) == 0){
                prime_value = 0;
                break;
            }
            number /= 10;
        }
    return prime_value;
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

double triangle_area(double a, double b, double c){
    return a + b + c;
}
bool is_triangle(double a, double b, double c){
    if (a + b > c && b + c > a && c + a > b){
        return true;
    } else {
        return false;
    }
}

int is_even(char *string){
    int count_digit = 0;
    int idx = strlen(string);
    for (int i = 0; i < idx; i++){
        char digit = string[i] - '0';
        arr[digit]++;
    }
    for (int i = 0; i < 10; i++){
        if (arr[i] == 0){
            return false;
        } 
    }
    return true;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    scanf("%d", &t);
    while(t--){
        char string[20];
        scanf("%s", string);
        printf(can_form_palindrome(string) ? "YES\n" : "NO\n");
    }
}