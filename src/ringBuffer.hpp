#ifndef ringBuffer_hpp
#define ringBuffer_hpp

#include <vector>

#include "dataStructures.h"


class RingBuffer{
int DATA_BUFFER_SIZE;
std::vector<DataFrame> dataBuffer;
public:
RingBuffer(int dataBufferSize); // constructor
~RingBuffer() { }; // destructor

void push(DataFrame frame); // fill ringbuffer
std::vector<DataFrame>::iterator end();
std::vector<DataFrame> get(); // get buffer
std::vector<DataFrame>::size_type size();

};

#endif /* ringBuffer_hpp */
