#ifndef STREAM_INSERTABLE_H
#define STREAM_INSERTABLE_H

#include <iostream>

class StreamInsertable{

    friend std::ostream& operator<< (std::ostream& out, const StreamInsertable & operand)
    {
        operand.stream_insert(out);
        return out;
    }

    public : 
        virtual void stream_insert(std::ostream & out) const = 0;


};

#endif