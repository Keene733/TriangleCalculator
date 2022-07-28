//Keene Cabahug this is my triangle side calculator.
#include <iostream>
#include <cmath>

int main()
{
    int sidea=0;
    int sideb=0;
    int sidec=0;
    int s=0;
    int x=0;
   // char userChoice= ' ';
    char playAgain= ' ';
   // char userName= ' ';
    
	std::cout<<"Hi, I want to find the area of a triangle based on your input.\n";
	std::cout<<"Please enter a length for side 1\n";
    std::cin>>sidea;
	   if (sidea>0) 
            std::cout<<"OK, the length of side 1 is "<<sidea<<"\n";
            else 
            do {
           std::cout<<"PLEASE enter a postive number\n";
           std::cin>>sidea;
       }while (sidea<0);
    std::cout<<"Now enter a length for side 2 please.\n";
    std::cin>>sideb;
        if(sideb>0){
        std::cout<<"OK. The length of side 2 is "<<sideb<<".\n";
        }
	else 
       do {
           std::cout<<"PLEASE enter a postive number\n";
           std::cin>>sideb;
       }while (sideb<0);
    
    std::cout<<"Now enter a length for side 3.\n";
    std::cin>>sidec;
        if(sidec>0){
          
        std::cout<<"OK. So the length of the sides are " <<sidea<<","<<sideb<<", and "<<sidec<< ".\n";
        }
        else 
            do {
           std::cout<<"PLEASE enter a postive number\n";
           std::cin>>sidec;
       }while (sidec<0);
    
s = (sidea+sideb+sidec)/2;
    
         std::cout<<"Now I'll find the area of the triangle using Heron's Formula.\n";
    
         std::cout<<"The area is "<<sqrt(s*(s-sidea)*(s-sideb)*(s-sidec))<<"\n";
         
    
    
    	std::cout<<"I knew you would be!\n";
    
    	std::cout<<" \n  #\n ";
  std::cout<<" ###\n ";
  std::cout<<" ######\n ";
  std::cout<<" ########\n ";
    
     
      
      std::cout<<"Would you like to find the area of another triangle?\n Y/N\n";
      std::cin>>playAgain;
      if(playAgain == 'Y' || playAgain == 'y'){
          }else return 0;
  
     
  
     do{
	std::cout<<"Please enter a length for side 1\n";
    std::cin>>sidea;
	   if (sidea>0) 
            std::cout<<"OK, the length of side 1 is "<<sidea<<"\n";
            else 
            do {
           std::cout<<"PLEASE enter a postive number\n";
           std::cin>>sidea;
       }while (sidea<0);
    std::cout<<"Now enter a length for side 2 please.\n";
    std::cin>>sideb;
        if(sideb>0){
        std::cout<<"OK. The length of side 2 is "<<sideb<<".\n";
        }
	else 
       do {
           std::cout<<"PLEASE enter a postive number\n";
           std::cin>>sideb;
       }while (sideb<0);
    
    std::cout<<"Now enter a length for side 3.\n";
    std::cin>>sidec;
        if(sidec>0){
        std::cout<<"OK. So the length of the sides are " <<sidea<<","<<sideb<<", and "<<sidec<< ".\n";
        }
        else 
            do {
           std::cout<<"PLEASE enter a postive number\n";
           std::cin>>sidec;
       }while (sidec<0);
    
s = sidea+sideb+sidec;
    
    	std::cout<<"The area is "<<sqrt(s*(s-sidea)*(s-sideb)*(s-sidec))<<"\n";
   
    	std::cout<<" \n  #\n ";
  std::cout<<" ###\n ";
  std::cout<<" ######\n ";
  std::cout<<" ########\n ";

      std::cout<<"Would you like to find the area of another triangle?\n Y/N\n";
      std::cin>>playAgain;
      if(playAgain == 'Y' || playAgain == 'y'){
          }else return 0;
          
     }while (playAgain == 'Y' || playAgain == 'y');
     
     
    
    
     
    return 0;
}






