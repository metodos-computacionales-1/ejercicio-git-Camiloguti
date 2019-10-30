#include <iostream>
#include <cmath>
int main(void){
    int H;
    std::cout<<"hipotenusa"<<std::endl;
    std::cin>>H;
    std::cout<<"ha ingresado hipotenusa"<<H<<std::endl;
    
    int O;
    std::cout<<"Cateto opuesto"<<std::endl;
    std::cin>>O;
    std::cout<<"ha ingresado cateto opuesto"<<O<<std::endl;
    
    int A;
    std::cout<<"Cateto Adyacente"<<std::endl;
    std::cin>>A;
    std::cout<<"ha ingresado cateto adyacente"<<A<<std::endl;
    
    if(H*H==O*O+A*A){
        std::cout<<"si es triangulo rectangulo"<<std::endl;
    }
    else {
        
        std::cout<<"no es triangulo rectangulo"<<std::endl;
    }
  
    
return 0;
    
    

}


