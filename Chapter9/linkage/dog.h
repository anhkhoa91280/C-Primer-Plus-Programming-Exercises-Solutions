#ifndef DOG_H_
#define DOG_H_
#include <iostream>
static std::string bone = "Bone"; //static duration, internal linkage : available
									//in Dog Translation Unit only

void bark();
void eat_bone();
#endif
