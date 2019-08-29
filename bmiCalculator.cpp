#include <iostream>

int main() {
  
	double height, weight, bmi;
  
  // Ask a user if they use pounds or kilograms
  
  std::cout << "Do you use pounds or kilograms as a weight measurement?\n";
  
  std::cin >> weightInput;

  // -- Lbs Version

	if (weightInput.toLowerCase() == "p" || "pounds" || "lbs") {
        std::cout << "Enter in your weight (lbs):\n";
        std::cin >> weight;
    
        double kg = weight * 0.45359237;
    
        std::cout << "Do you use feet or metres/meters as a height measurement?\n";
        std::cin >> heightInput;
    
        // Ft Version

        if (heightInput.toLowerCase() == ("f" || "feet" || "ft")) {
      
            std::cout << "Enter in your height (ft):\n";
            std::cin >> height;
      
            double m = height * 3.2808;
            bmi = weight / (height * height);
      
            std::cout << "Your BMI is calculated to be " << bmi;

         // M Version

         } else if (heightInput.toLowerCase() == ("m" || "metres" || "meters")) {
               
                    std::cout << "Enter in your height (m):\n";
                    std::cin >> height;

                    bmi = weight / (height * height);

                    std::cout << "Your BMI is calculated to be " << bmi;

         // Rejection

         } else {
                  std::cout << "Invalid input. Supported terms:\n f\n feet\n ft\n\n m\n metres\n meters\n";
}
    
  // -- Kg Version

  } else if (weightInput.toLowerCase() == ("kg" || "kilograms" || "kilos")) {
        std::cout << "Enter in your weight (kg):\n";
   		std::cin >> weight;
     	
        std::cout << "Do you use feet or metres/meters as a height measurement?\n";
        std::cin >> heightInput;
    
          // Ft Version

    	  if (heightInput.toLowerCase() == ("feet" || "f" || "ft")) {

                    std::cout << "Enter in your height (ft):\n";
                    std::cin >> height;
      
                    double m = height * 3.2808;
                    bmi = weight / (height * height);
      
                    std::cout << "Your BMI is calculated to be " << bmi;  

            // M Version

          } if else (heightInput.toLowerCase() == ("m" || "metres" || "meters")){

                    std::cout << "Enter in your height (m):\n";
                    std::cin >> height;

                    bmi = weight / (height * height);

                    std::cout << "Your BMI is calculated to be " << bmi;

            // Rejection

          } else {
              std::cout << "Invalid input. Supported terms:\n f\n ft\n feet\n\n m\n metres\n meters\n";
          }
    		
    
    // -- Rejection

  } else {
    std::cout << "Invalid input. Supported terms:\n p\n pounds\n lbs\n\n kg\n kilograms\n kilos\n";
  }
  
return 0;

  /*
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  // Now ask the user for their weight and calculate BMI
  
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;
  
  bmi = weight / (height * height);
  
  std::cout << "Your BMI is " << bmi << "\n";
  
  return 0;

*/

}