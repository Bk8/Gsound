#pragma once
#include "Position.h"
#include "Ray.h"
#include "list"
class Source
{
public:
	Source(void);
	~Source(void);
	Position position;
	std::list <Ray> sound []; 
	void PropagateSoundFile(SoundFile);
};

