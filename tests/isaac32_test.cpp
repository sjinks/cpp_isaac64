#include <cstdio>
#include "../isaac32_engine.h"

int main(int, char**)
{
	std::uint32_t i, j;

	isaac32_engine e;
	e.discard(256);

	for (i=0; i<2; ++i) {
		uint32_t a[256];
		for (j=0; j<256; ++j) {
			std::uint32_t v = e();
			a[255-j]=v;
		}

		for (j=0; j<256; ++j) {
			std::uint32_t v = a[j];
			std::printf("%.8x", v);
			if ((j & 7) == 7) {
				std::printf("\n");
			}
		}
	}

	return 0;
}
