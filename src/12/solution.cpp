
void sort_values(int* a, int* b, int* c) {
    int* ptrs[3] = {a, b, c};
    int values[3];
    int count = 0;

    for (int i = 0; i < 3; ++i) {
        if (ptrs[i] != nullptr) {
            values[count] = *ptrs[i];
            ++count;
        }
    }

    if (count <= 1) return;
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    int idx = 0;
    for (int i = 0; i < 3; ++i) {
        if (ptrs[i] != nullptr) {
            *ptrs[i] = values[idx];
            ++idx;
        }
    }
}