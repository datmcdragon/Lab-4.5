#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()

 {
    
    double x, y, R;
    
        srand((unsigned) time(NULL));
    
    cout << "R = "; cin >> R;
    
    for (int i=0; i<10; i++)
        
   {
     
     cout << "x = "; cin >> x;
     cout << "y = "; cin >> y;
     
     
     if ((x>=-R && x<=0 && y<=R && y >= 0 && y*y <= R*R-x*x) || (x>0 && x<=R/2 && y>=R && y<=0 && y>=2*x) || (x>=R/2 && x<=R && y>=R && y<=0 && y>=2*x-2*R)) 
         
         cout << "yes" << endl;
     
        else
     
            cout << "no" << endl;
     
   }
     
        cout << endl << fixed;
    
    for (int i=0; i<10; i++)
        
   {
     
     x = -R + rand() * (R - (-R)) / RAND_MAX;
     y = -R + rand() * (R - (-R)) / RAND_MAX;
     
        if ((x>=-R && x<=0 && y<=R && y >= 0 && y*y <= R*R-x*x) || (x>0 && x<=R/2 && y>=R && y<=0 && y>=2*x) || (x>=R/2 && x<=R && y>=R && y<=0 && y>=2*x-2*R))
     
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
     
 else
     
     cout << setw(8) << setprecision(4) << x << " "
     << setw(8) << setprecision(4) << y << " " << "no" << endl;
     
   }
    
 return 0;
    
}
