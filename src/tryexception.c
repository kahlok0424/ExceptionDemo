#include "tryexception.h"
#include "CException.h"

#define radius_is_negative 3
float getArea_of_circle(float radius){
    
    float pi = 22.0/7.0;
    if(radius < 0)
        Throw(createException("This radius is negative" \
                               , radius_is_negative));
        
        return ( pi * (radius*radius) );
}


void tryException_Area(float radius){
    CEXCEPTION_T ex1;
    Try{
        float area = getArea_of_circle(radius);
        printf("The area of the circle with %f radius is %f meter square.", radius,area);
    }Catch(ex1){
        dumpException(ex1);
      /*  if( ex1 == radius_is_negative)    
            printf("The radius is zero!" );*/
    }
}


#define Divided_by_zero 1
#define Divided_by_neg 2

float divide(float v1 ,float  v2){
    if (v2 == 0)
        Throw(Divided_by_zero);
    else if(v2 < 0)
        Throw(Divided_by_neg);
        return v1 / v2;
}

void tryException(float v1  ,float v2){
    CEXCEPTION_T ex;
    Try{
        // try something....
        float val = divide(v1,v2);
        printf("%f divide by %f is %f\n", v1,v2,val );
    }Catch(ex){
        if(ex == Divided_by_zero)
            printf("Cannot divide by zero");
            else if( ex == Divided_by_neg)
                printf("Cannot divide by neagtive number");
        
    }//resovle problem
    
}