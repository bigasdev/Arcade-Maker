#include "Sprite.h"


Sprite::Sprite() {
	pixelRows = {};
}


Sprite::Sprite(std::array<Uint16, 16> pixels) {
	pixelRows = pixels;
}


// Returns true if there is a pixel at the pixel coordinate.
// Coordinates range from top-left (0, 0) to bottom-right (15, 15).
bool Sprite::getPixel(Uint8 x, Uint8 y) {
	if (x < 0 || y < 0 || x > 15 || y > 15) {
		return false;
	}
	return pixelRows[y] & (1 << (16 - x));
}