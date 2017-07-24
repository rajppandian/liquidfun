#ifndef B2JOINTJSBINDINGS_H
#define B2JOINTJSBINDINGS_H

extern "C"  {
void* b2Joint_GetBodyA(void* joint);
void* b2Joint_GetBodyB(void* joint);
void b2Joint_GetAnchorA(void* joint, float* arr);
void b2Joint_GetAnchorB(void* joint, float* arr);
}

#endif
