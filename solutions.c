int pies_kopecks(int a, int b, int n) {
    int price = a * 100 + b;
    int total = price * n;
    return total % 100;


// task 2 , apples

int apples(int n, int k) {
    return k % n;
}
