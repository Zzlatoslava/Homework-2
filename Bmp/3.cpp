#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
int main3() {
    const char* input = "rainbow.bmp";
    const char* output = "shades of grey rainbow.bmp";
    RgbImg iimg = readRgbImg(input);
    RgbImg outputimg = createRgbImg(iimg.height, iimg.width, { 0, 0, 0 });
    for (size_t row = 0; row < iimg.width; row++) {
        for (size_t col = 0; col < iimg.height; col++) {
            int median = (iimg.pixels[col][row].Red + iimg.pixels[col][row].Blue + iimg.pixels[col][row].Green) / 3;
            outputimg.pixels[col][row].Red = outputimg.pixels[col][row].Green = outputimg.pixels[col][row].Blue = median;
        }
    }
    writeRgbImg(output, outputimg);
    deleteRgbImg(iimg);
    deleteRgbImg(outputimg);
    return 0;
}