// misc.cpp - written and placed in the public domain by Wei Dai

#include "FirstCrypto.h"
#include "misc.h"
#include "words.h"

NAMESPACE_BEGIN(CryptoPP)

byte OAEP_P_DEFAULT[1];

void xorbuf(byte *buf, const byte *mask, uint32_t count)
{
	if (((long uint32_t)buf | (long uint32_t)mask | count) % WORD_SIZE == 0)
		XorWords((word *)buf, (const word *)mask, count/WORD_SIZE);
	else
	{
		for (uint32_t i=0; i<count; i++)
			buf[i] ^= mask[i];
	}
}

void xorbuf(byte *output, const byte *input, const byte *mask, uint32_t count)
{
	if (((long uint32_t)output | (long uint32_t)input | (long uint32_t)mask | count) % WORD_SIZE == 0)
		XorWords((word *)output, (const word *)input, (const word *)mask, count/WORD_SIZE);
	else
	{
		for (uint32_t i=0; i<count; i++)
			output[i] = input[i] ^ mask[i];
	}
}

uint32_t Parity(unsigned long value)
{
	for (uint32_t i=8*sizeof(value)/2; i>0; i/=2)
		value ^= value >> i;
	return (uint32_t)value&1;
}

uint32_t BytePrecision(unsigned long value)
{
	uint32_t i;
	for (i=sizeof(value); i; --i)
		if (value >> (i-1)*8)
			break;

	return i;
}

uint32_t BitPrecision(unsigned long value)
{
	if (!value)
		return 0;

	uint32_t l=0, h=8*sizeof(value);

	while (h-l > 1)
	{
		uint32_t t = (l+h)/2;
		if (value >> t)
			l = t;
		else
			h = t;
	}

	return h;
}

unsigned long Crop(unsigned long value, uint32_t size)
{
	if (size < 8*sizeof(value))
    	return (value & ((1L << size) - 1));
	else
		return value;
}

NAMESPACE_END
