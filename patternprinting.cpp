#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
void print4(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=1; i<=n;i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=0; i<n;i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8(int n){
    for(int i=0; i<n;i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print9(int n){
    for(int i=0; i<n;i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n;i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print10(int n){
    for(int i = 1; i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars=2*n-i;
        for(int j =1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n){
   
        int stars = 1;
        for(int i = 0; i<n;i++){
        if(i%2 == 0) stars=1;
        else stars = 0;
        for(int j =0;j<=i;j++){
            cout<<stars;
            stars = 1 - stars;
        }
        cout<<endl;
    }
}
void print12(int n){
    int space = 2*(n-1);
    for(int i = 1; i<=n; i++){
        //numbers
        for (int j = 1; j<=i; j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        //numbers
        for (int j = i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}
void print13(int n){
    int num=1;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }

}
void print14(int n){
    for(int i=0; i<n;i++){
        for(char ch = 'A'; ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void print15(int n){
    for(int i=0; i<n;i++){
        for(char ch = 'A'; ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void print16(int n){
    for(int i=0; i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void print17(int n){
    for(int i=0; i<n;i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j<=2*i+1; j++){
            cout<<ch;
            if (j <= breakpoint )ch++;
            else ch--;
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print18(int n){
    for (int i = 0;i<n;i++){
        for(char ch = 'E' - i;ch <='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;

    }
}
void print19(int n){
    int inis = 0;
    for(int i = 0; i<n;i++){
        //stars
        for(int j = 1; j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j = 0; j<inis;j++){
            cout<<" ";
        }
        //stars
        for(int j = 1; j<=n-i;j++){
            cout<<"*";
        }
        inis += 2;
        cout<<endl;
    }
    inis = 8;
    for(int i = 1; i<=n;i++){
        //stars
        for(int j = 1; j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j = 0; j<inis;j++){
            cout<<" ";
        }
        //stars
        for(int j = 1; j<=i;j++){
            cout<<"*";
        }
        inis -= 2;
        cout<<endl;
    }


}
void print20(int n){
    int spaces = 2*n-2;
    for(int i = 1;i<=2*n-1;i++){
        int stars  = i;
        if(i>n) stars = 2*n-i;
        //stars
        for(int j=1; j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1; j<=spaces;j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces -= 2;
        else spaces += 2;
    }

}
void print21(int n){
    for(int i =0; i<n;i++){
        for(int j=0;j<n;j++){
            if(i == 0 || j == 0||i ==n-1 || j == n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }

}
void print22(int n){
    for(int i = 0; i<2*n-1;i++){
        for(int j =0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top,down),min(right,left)));
        }
        cout<<endl;
    }
}


int main(){
        int n;
        cin>>n;
        print1(n);
        cout<<endl;
         print2(n);
         cout<<endl;
         print3(n);
         cout<<endl;
        print4(n);
         cout<<endl;
         print5(n);
        cout<<endl;
        print6(n);
         cout<<endl;
         print7(n);
         cout<<endl;
        print8(n);
        cout<<endl;
         print9(n);
         cout<<endl;
         print10(n);
         cout<<endl;
        print11(n);
        cout<<endl;
         print12(n);
        cout<<endl;
         print13(n);
        cout<<endl;
        print14(n);
         cout<<endl;
         print15(n);
         cout<<endl;
         print16(n);
        cout<<endl;
         print17(n);
         cout<<endl;
        print18(n);
         cout<<endl;
         print19(n);
         cout<<endl;
         print20(n);
         cout<<endl;
         print21(n);
         cout<<endl;
         print22(n);

       
}