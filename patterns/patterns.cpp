#include <iostream>
#include <cstdlib>

void pattern1(int n) {

/*
* * * * 
* * * * 
* * * * 
* * * * 
*/
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void pattern2(int n) {
/*
* 
* * 
* * * 
* * * * 

*/
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void pattern3(int n) {
/*
1 
1 2 
1 2 3 
1 2 3 4 
*/
    for (int i=0; i<n; i++) {
        int val = 1;
        for (int j=0; j<i+1; j++) {
            std::cout << val << " ";
            val++;
        }
        std::cout << "\n";
    }
}

void pattern4(int n) {
/*
1 
2 2 
3 3 3 
4 4 4 4 
*/
    for (int i=0; i<n; i++) {
        int val = i+1;
        for (int j=0; j<i+1; j++) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}

void pattern5(int n) {
/*
* * * * 
* * * 
* * 
* 
*/
    for (int i=0; i<n; i++) {
        for (int j=n; j>i; j--) {
            std::cout << "* "; 
        }
        std::cout << "\n";
    }
}

void pattern6(int n) {

/*
1 2 3 4 
1 2 3 
1 2 
1 
*/

    for (int i=0; i<n; i++) {
        int val = 1;
        for (int j=n; j>i; j--) {
            std::cout << val << " ";
            val++;
        }
        std::cout << "\n";
    }
}

void pattern7(int n) {

    // for 

    // 2n-1
    // n
    // n-1-i
    // 2*i+1
    // n-1-i

   /*
    
            *       
          * * *     
        * * * * *   
      * * * * * * *
    */

    for (int i=0; i<n; i++) {
        for (int j=0; j<n-1-i; j++ ) {
            std::cout << "  ";
        }
        for (int j=0; j<(2*i+1); j++) {
            std::cout << "* ";
        }
        for (int j=0; j<n-1-i; j++ ) {
            std::cout << "  ";
        }
        std::cout << "\n";
    }
}

void pattern8(int n) {

/*
* * * * * * * 
  * * * * *   
    * * *     
      *    
*/

    // for 

    // 2n-1
    // n
    // n-1-i
    // 2*i+1
    // n-1-i


    for (int i=0; i<n; i++) {

        for (int j=0; j<i; j++) {
            std::cout << "  ";
        }

        for (int j=0; j<2*n-1-2*i; j++) {
            std::cout << "* ";
        }

        for (int j=0; j<i; j++) {
            std::cout << "  ";
        }
        std::cout << "\n";
    } 
}

void pattern9(int n)
{

/*
      *       
    * * *     
  * * * * *   
* * * * * * * 
* * * * * * * 
  * * * * *   
    * * *     
      *   
*/

    pattern7(n);
    pattern8(n);
}

void pattern10(int n) {

/*
* 
* * 
* * * 
* * * * 
* * * 
* * 
* 
*/

    pattern2(n-1);
    for (int i=0; i<n; i++) {
        std::cout << "* ";
    }
    std::cout << "\n";
    pattern5(n-1);
}

void pattern11(int n) {

/*
1 
0 1 
1 0 1 
0 1 0 1 
*/

    for(int i=0; i<n; i++) {
        int localVal = i%2? 1: 0;
        for (int j=0; j<i+1; j++) {
            localVal ^= 1;
            std::cout << localVal << " ";
        }
        std::cout << "\n";
    }
}

void pattern12(int n) {
/*
1             1 
1 2         2 1 
1 2 3     3 2 1 
1 2 3 4 4 3 2 1
*/

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            std::cout << j << " ";

        }
        for (int j=0; j<2*(n-i); j++) {
            std::cout << "  ";
        }
        for (int j=i; j>=1; j--) {
            std::cout << j << " ";
        }
        std::cout << "\n";

    }
}

void pattern13(int n) {
/*
1 
2 3 
4 5 6 
7 8 9 10 
*/

    int val=1;
    for (int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            std::cout << val << " ";
            val++;
        }
        std::cout << "\n";
    }
}

void pattern14(int n) {
/*
A 
A B 
A B C 
A B C D 
*/
    for (int i=0; i<n; i++) {
        char c = 'A';
        for (int j=0; j< i+1; j++) {
            std::cout << c << " ";
            c++;
        }
        std::cout << "\n";
    }

}

void pattern15(int n) {
/*
A B C D 
A B C 
A B 
A 
*/

    for (int i=0; i<n; i++) {
        char c = 'A';
        for (int j=0; j<n-i; j++) {
            std::cout << c << " ";
            c++;
        }
        std::cout << "\n";
    }
}

void pattern16(int n) {
/*
A 
B B 
C C C 
D D D D 
*/
    char c = 'A';
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            std::cout << c << " ";
        }
        c++;
        std::cout << "\n";
    }
}

void pattern17(int n) {
/*
      A       
    A B A     
  A B C B A   
A B C D C B A 
*/
    // 2n-1 -(2i+1) = 2(n-i-1)
    for (int i=1; i<=n; i++) {

        for (int j=0; j<n-i; j++) {
            std::cout << "  ";
        }
        char c = 'A';
        for (int j=0; j<i; j++) {
            std::cout << c << " ";
            c++;
        }
        c-=2;
        for (int j=0; j<i-1; j++) {
            std::cout << c << " ";
            c--;
        }
        for (int j=0; j<n-i; j++) {
            std::cout << "  ";
        }

        std::cout << "\n";
    }

}

void pattern18(int n) {
/*
D 
C D 
B C D 
A B C D
*/
    char startC = 'A' + n - 1;

    for (int i=0; i<n; i++) {
        char c = startC;
        for (int j=0; j<i+1; j++) {
            std::cout << c << " ";
            c++;
        }
        startC--;
        std::cout << "\n";
    }

}

void pattern19(int n) {
    for (int i=0; i<2*n; i++) {
/*
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
*/
        // 2n- (2i-2n+2)
        int stars = i<n ? n-i : i-n+1;
        int spaces = i<n ? 2*i : 4*n-2*i-2;

        for (int j=0; j<stars; j++) {
            std::cout << "* ";
        }

        for (int j=0; j<spaces; j++) {
            std::cout << "  ";
        }

        for (int j=0; j<stars; j++) {
            std::cout << "* ";
        }


        std::cout << "\n";
    }
}

void pattern20(int n) {
/*
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 
*/

    // (i-n+1)*2
    // 2n-(i-n+1)*2 = 4n-2*i-2;
    for (int i=0; i<2*n-1; i++) {
        int stars = i<n ? i+1 : (2*n-i-1);
        int spaces = i<n ? 2*n-(i+1)*2 : (i-n+1)*2;

        for(int j=0; j<stars; j++) {
            std::cout << "* ";
        }
        for (int j=0; j<spaces; j++) {
            std::cout << "  ";
        }
        for(int j=0; j<stars; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

void pattern21(int n) {
/*
* * * * 
*     * 
*     * 
* * * *
*/

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==0 || i==n-1 || j==0 || j==n-1) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }

}

void pattern22(int n) {
    // i -> 0, 2n-1
    // j -> 0, 2n
    // val decremented i number of times in a row first
    // when j becomes n print it same number of times as i
/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
*/
    int midi = n-1;
    int midj = n-1;

    for (int i=0; i<2*n-1; i++) {
        for (int j=0; j<2*n-1; j++) {
            int val = std::max(std::abs(midi-i), std::abs(midj-j)) + 1;
            std::cout << val << " ";
        }
        std::cout << "\n";
    }
}


int main() {
    pattern1(4);
    pattern2(4);
    pattern3(4);
    pattern4(4);
    pattern5(4);
    pattern6(4);
    pattern7(4);
    pattern8(4);
    pattern9(4);
    pattern10(4);
    pattern11(4);
    pattern12(4);
    pattern13(4);
    pattern14(4);
    pattern15(4);
    pattern16(4);
    pattern17(4);
    pattern18(4);
    pattern19(4);
    pattern20(4);
    pattern21(4);
    pattern22(4);
}

