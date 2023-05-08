#include "box.h"

double volume(struct Box mybox, int count)
{
	
	return (mybox.length-mybox.thick)*(mybox.breadth-mybox.thick)*(mybox.height-mybox.thick);
}

