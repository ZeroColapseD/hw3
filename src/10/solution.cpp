long long sum_array(long long* from, long long* to) {
    if (from == nullptr || to == nullptr || from > to) {
        return 0LL;
    }
    long long sum = 0;
    for (long long* p = from; p != to; ++p) {
        sum += *p;
    }
    return sum;
}