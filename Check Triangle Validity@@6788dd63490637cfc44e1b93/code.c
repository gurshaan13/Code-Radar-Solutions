int main() {
    int a, b, c;
    
    // Input the three sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("The sides form a valid triangle.\n");
    } else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}