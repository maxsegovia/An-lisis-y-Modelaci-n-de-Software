#ifndef DSKTP
#define DSKTP

#include "Computer.h"

class Desktop : public Computer
{
  public:
    //Constructor
    Desktop();
    
    //Destructor
    ~Desktop();

    //Methods
    static int selected();
};

#endif
