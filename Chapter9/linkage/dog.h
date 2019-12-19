#ifndef DOG_H_
#define DOG_H_
#include <iostream>
std::string butter = "Butter"; //static duration, external linkage : available in the
								//Cat Translation Unit as well.
static std::string bone = "Bone"; //static duration, internal linkage : available within 									//Dog Translation Unit only.

void bark();
void eat_bone();
#endif
