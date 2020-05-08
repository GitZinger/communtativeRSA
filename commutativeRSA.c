#include <stdio.h>
#include<math.h> 
int pm(int a,int b, int n){
 	long long x=1,y=a;
    while (b>0){
    if (b%2 ==1)
        	x=(x*y)%n;
    y=(y*y)%n;
    b/=2;
    
    
    }
        
    return x%n;
}
    
int main() {
    int p = 11;
    int q= 13;
    int n=3127;
    int m=97;
    int e=7;
    int d=3447;
    
   	int c= pm(m,e,n);
    
  	 int d2=2011;
    int e2=3;
 	int ph=3127; 
    int k0=pm(m,e2,ph);
    printf("k0 is %d\n",k0);
    
   // int k1=pm(k0,e
    printf("%d\n",c);
    
    int m3=pm(c,e2,ph);
     printf("2nd enc 1st %d\n",m3);
    
    int m4=pm(pm(m,e2,ph),e,n);
    printf("2nd enc 2nd %d\n",m4);
    
    int m2=pm(c,d,n);
    printf("%d\n",m2);
    
    
    int e4=7;
    int d4=103;
    int n4=143;
    
    int m0=86;
    int m9=pm(m0,e4,n4);
    printf("tset %d\n",m9);
    
    int ms=pm(m9,d4,n4);
     printf("tset %d\n",ms);
    
    
    
    return 0;
}
    
