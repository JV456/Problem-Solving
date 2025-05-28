var nthUglyNumber = function(n) {
    const h = [1];
    let i = 0, j = 0, k = 0;

    while (h.length < n) {
        const next = Math.min(h[i] * 2, h[j] * 3, h[k] * 5);
        h.push(next);

        if (next === h[i] * 2) i++;
        if (next === h[j] * 3) j++;
        if (next === h[k] * 5) k++;
    }

    return h[n - 1];
};