void alphaTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        char ch='A'+(n-1);
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            ch--;
        
        }
        cout << endl;
    }
}
/*
Sample Input 1:
3
Sample Output 1:
C
C B 
C B A
Sample Input 2 :
1
Sample Output 2 :
A
*/
