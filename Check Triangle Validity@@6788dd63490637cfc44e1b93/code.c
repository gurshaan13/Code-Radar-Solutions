int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check the triangle inequality theorem
    if (a + b >= c && a + c >= b && b + c >= a) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}