int main() { int x = 10; int *ptr = &x; *ptr = 20; printf("%d\n", x); //The output is 20. The variable x is correctly modified. return 0; }