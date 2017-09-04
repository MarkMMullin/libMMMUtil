//! macro to allocate a new buffer, copy string argument to it, and return a pointer to the new buffer
#define STRSAVE(x) strcpy(new char[strlen(x) + 1],x)
//! macro to delete and zero a pointer
#define SAFE_DELETE(p)  { if(p) { delete (p);     (p)=NULL; } }
//! macro to delete and zero an array pointer
#define SAFE_DELETE_ARRAY(p) { if(p) {delete[] (p); (p) = NULL; }}
