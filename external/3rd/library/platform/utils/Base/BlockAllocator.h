#if !defined (BLOCKALLOCATOR_H_)
#define BLOCKALLOCATOR_H_

#include <stdio.h>
#include <stdlib.h>

#ifdef EXTERNAL_DISTRO
namespace NAMESPACE 
{

#endif
namespace Base 
{
	class BlockAllocator
	{
	public:
		BlockAllocator();
		~BlockAllocator();
		void *getBlock(long unsigned accum);
		void returnBlock(long unsigned *handle);

	private:
		uintptr_t  *m_blocks[31];
	};
};
#ifdef EXTERNAL_DISTRO
};
#endif

#endif
