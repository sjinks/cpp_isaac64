#include <cstdio>
#include "../isaac64_engine.h"

int main(int, char**)
{
	std::uint64_t i, j;

	isaac64_engine e;
	e.discard(256);

	for (i=0; i<2; ++i) {
		uint64_t a[256];
		for (j=0; j<256; ++j) {
			std::uint64_t v = e();
			a[255-j]=v;
		}

		for (j=0; j<256; ++j) {
			std::uint64_t v = a[j];
			std::printf("%.8x%.8x", (uint32_t)(v>>32), (uint32_t)v);
			if ((j&3)==3) {
				std::printf("\n");
			}
		}
	}

	return 0;
}
