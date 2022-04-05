#include <iostream>

#include "ringBuffer.hpp"


RingBuffer::RingBuffer(int dataBufferSize){
    DATA_BUFFER_SIZE = dataBufferSize;
}

void RingBuffer::push(DataFrame frame){
    
    if (dataBuffer.size() >= DATA_BUFFER_SIZE) {
        dataBuffer.erase(dataBuffer.begin());
    }
    dataBuffer.push_back(frame);
    
}

std::vector<DataFrame> RingBuffer::get(){
    return dataBuffer;
}

std::vector<DataFrame>::iterator RingBuffer::end(){
    return dataBuffer.end();
}

std::vector<DataFrame>::size_type RingBuffer::size(){
    return dataBuffer.size();
}