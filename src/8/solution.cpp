void swap_int(int* a, int* b) {
    if (a == nullptr || b == nullptr) {
        return;  // ничего не делаем
    }
    int temp = *a;
    *a = *b;
    *b = temp;
}