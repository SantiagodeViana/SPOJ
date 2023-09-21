int lcs (int i, int j){
    if (j == m) return 0;
    if (i == n) return 0;
    if (a(i) == b(j)) return (1+(cs(i+1;j+1)));
    return max (lcs(i+1;j); lcs (i; j+1));
