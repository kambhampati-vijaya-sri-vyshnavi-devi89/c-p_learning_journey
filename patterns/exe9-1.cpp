void nStarDiamond(int n) {
    // Write your code here.
    for (int i=0; i<n; i++){
        //space
        for (int s=0;s < n-(i+1); s++) {
            cout << " ";
        }
        //star
        for (int j=0; j < 2*i+1; j++){
            cout << "*";
        }
        //space
        for (int s=0;s < n-(i+1); s++) {
            cout << " ";
        }
        cout << "\n";
    }
    //lower triangle
    //lower triangle rows
    for (int m=0; m<n; m++){
        //space
        for (int s=0;s < m; s++) {
            cout << " ";
        }
        //star
        for (int p=0; p < 2*n-(2*m+1); p++){
            cout << "*";
        }
        //space
        for (int s=0;s < m; s++) {
            cout << " ";
        }
        cout << "\n";
    }
}
