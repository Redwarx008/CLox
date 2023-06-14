#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"


 enum OpCode
 {
	OP_RETURN,
 };

 class Chunk
 {
 public:
	 Chunk()
	 {
		 count = 0;
		 capacity = 0;
		 code = nullptr;
	 }
	 int count;
	 int capacity;
	 uint8_t* code;
 private:
	 void writeChunk(Chunk* chunk, uint8_t byte);
 };


#endif