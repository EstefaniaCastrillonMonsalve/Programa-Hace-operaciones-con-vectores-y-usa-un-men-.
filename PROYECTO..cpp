#include <iostream>
#include <math.h>

using namespace std;

int main(){
  
  int antes_igual;
  int subx;
  int suby;
  int subz;
  cout << "escriba segun las variables esten antes del igual 1x=yz, 2y=xz, 3z=xy, 4xy=z, 5xz=y, 6yz=x ";
  cin >>antes_igual;
  cout << "escriba el numero del signo de x 1+,2-,3*,4/, ";
  cin >>subx;
  cout << "escriba el numero del signo de y 1+,2-,3*,4/, ";
  cin >>suby;
  cout << "escriba el numero del signo de z 1+,2-,3*,4/, ";
  cin >>subz;
  switch(antes_igual){
  case 1: /*caso 1 ante_igual x=yz*/
  

 switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /* cas1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 /y*/
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{
       cout <<"-y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"-y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 break;
  }
  break;
  } /* fin caos x */


 case 2:{ /*caso 2 antes_igual y=xz*/ 
switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"-z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /* caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"-z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"-z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{ /*caso 4 /Y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"-z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 case 3:{ /*caso 3 *x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
   break;
 }
 case 4:{ /*caso 4 /x*/
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de *Y*/
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
   break;
  } /* fin caos x */
 break;
 }
 case 3:{ /*caso 3 antes del igual z=xy*/
switch(subx){
case 1:{
cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
          cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y */
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout << "/";
        cout << "y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout << "/";
        cout << "y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/";
        cout <<"y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/";
        cout <<"y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y*"; /*caso 4 de /Y*/
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout << "+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
}
break;
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /* caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *y*/
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        cout << "/";
        cout << "-";
        cout << "y";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        cout << "/";
        cout << "-";
        cout << "y";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        cout <<"/";
        cout <<"-y";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        cout <<"/";
        cout <<"-y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{ /*caso 4 /Y*/
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        cout << "*-y";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        cout << "*-y";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        cout <<"*-y";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        cout <<"*-y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 case 3:{ /*caso 3 *x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"-->"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
   break;
 }
 case 4:{ /*caso 3 /x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"-->"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
   break;
  } /* fin caos x */
  break;
}
case 4:{ /*caso 4 antes_igual xy=z*/
switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+z";
        break;
        }
        case 4:{
        cout <<"+z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout << "/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout << "/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"..."; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /* caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        cout <<"/-y";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        cout <<"/-y";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        cout <<"/-y";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        cout <<"/-y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{ /*caso 4 /Y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        cout <<"*-y";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        cout <<"*-y";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        cout <<"*-y";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        cout <<"*-y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 case 3:{ /*caso 3 *x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+z";
        break;
        }
        case 4:{
        cout <<"+z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout << "/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout << "/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
   break;
 }
 case 4:{ /*caso 4 /x*/
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+z";
        break;
        }
        case 4:{
        cout <<"+z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout << "/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout << "/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
   break;
  } /* fin caos x */
 break;
 }
break;

case 5:{ /*caso 5 antes_igual xz=y*/
switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/z";
        break;
        }
        case 4:{
        cout <<"*z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*-";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /* caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*-";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*-";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{ /*caso 4 /Y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*-";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 case 3:{ /*caso 3 *x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/z";
        break;
        }
        case 4:{
        cout <<"*z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
   break;
 }
 case 4:{ /*caso 4 /x*/
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/z";
        break;
        }
        case 4:{
        cout <<"*z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
   break;
  } /* fin caos x */
 break;
 }
break;
case 6:{ /*caso 6 de antes_igual*/
 switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /* cas1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 /y*/
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{
       cout <<"-y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"-y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 break;
  }
  break;
}
break;
}
break; 
  }
  

  


return 0;
}
/*******************************************
Código de calculadora básica

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	char opcion;
	float x, y, z;
float suma, resta, multi, divi, lineal;
	
		
	cout << "Ingrese la opcion segun la operacion que desea resolver: \n 1 - Suma \n 2 - Resta \n 3 - Multiplicacion \n 4 - Division \n Aqui ingrese el numero -->";
	cin >> opcion;
	
	switch (opcion){
		
		//Suma
		
		case '1':
			cout << "Ingrese el primer digito -->";
			cin >> x;
			cout << "Ingrese el segundo digito -->";
			cin >> y;
			
			suma = x + y;
			
			cout << "El resultado de la suma es --> " << suma;
			break;
		
		//Resta
		
		case '2':
			cout << "Ingrese el primer digito -->";
			cin >> x;
			cout << "Ingrese el segundo digito -->";
			cin >> y;
			
			resta = x - y;
			
			cout << "El resultado de la resta es --> " << resta;
			break;
		
		//multiplicación
		
		case '3':
			cout << "Ingrese el primer digito -->";
			cin >> x;
			cout << "Ingrese el segundo digito -->";
			cin >> y;
			
			multi = x * y;
			
			cout << "El resultado de la multiplicacion es --> " << multi;
			break;
		
		//división
		
		case '4':
			cout << "Ingrese el primer digito -->";
			cin >> x;
			cout << "Ingrese el segundo digito -->";
			cin >> y;
			
			divi = x / y;
			
			cout << "El resultado de la suma es --> " << divi;
			break;
		
			
		default:
		cout << "Es un error";
		
	}
}
*/

