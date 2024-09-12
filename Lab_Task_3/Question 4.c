#include <stdio.h>
  int main(){
  	
  	// 1207
    // ftf = 118
    // return = 123
    
    float fuelavg = 0.0,fortrip = 0.0 ,backtrip = 0.0;
    int distance = 1207;
    float fuelconsume = 0.0;
    float totalcost = 0.0 ,totalfuel =0.0;
    
    printf("enter fuel average ");
    scanf("%f",&fuelavg);
    
    if (fuelavg <1)
    {
    	printf("invalid entry");
	}
    
    else
    {
    	fuelconsume = distance /fuelavg;
        fortrip = fuelconsume* 118;
        backtrip = fuelconsume* 123;
        totalcost = fortrip + backtrip;
        totalfuel = fuelconsume *2;
        
        printf("Fuel price = %.2f\n ", totalcost);
        printf("Fuel fuel consumed = %.2f\n", totalfuel);
        
	}
    return 0;
    
}
    
    
    
  
  