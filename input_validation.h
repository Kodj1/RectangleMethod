#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <string>

double getValidatedInput(const std::string& prompt);
int getValidatedSegments(const std::string& prompt);
int getFunctionChoice();
int getMethodChoice();


#endif // INPUT_VALIDATION_H
