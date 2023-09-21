int edist (int i, int j){
    if (j==m) return (n-i);
    if (i==n) return (m-j);
    if (a[i] == b[j]) return edist (i+1, j+1);
    return 1 + min (edist (i+1,j)
                   (edist (i,j+1)
                   (edist (i+1,j)
}

}for (i = 0; i <= n; i++){
    dp [i][m] = (n-i);
}for (i = 0; j <= n; j++){
    dp [n][j] = (m-j);
}for (j = n-1; i >= 0; i--){
    }for (j = m-1; j >= 0, j--){
        if (a[i] == b[j])
    }else{
          dp [i][j] = 1 + min(dp[i+1](j), dp[i](j+1), dp[i+1](j+1);
