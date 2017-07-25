namespace math {
    /*
     * n^r
     */
    i64 pow(i64 n, i64 r) {
        if (r == 0) {
            return 1;
        }

        auto r2 = r / 2;
        auto x2 = pow(n, r2);

        return x2 * x2 * ((r % 2 == 0) ? 1 : n);
    }

    i64 gcd(i64 a, i64 b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
}