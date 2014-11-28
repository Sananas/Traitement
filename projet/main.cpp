#include <QCoreApplication>
#include <traitementimage.h>
#include <percepunit.h>

#include <iostream>

using namespace cv;


int main( int argc, char** argv )
{
    Mat image = imread( argv[1]);
    TraitementImage Traitement(&image);

    waitKey(0);
    return 0;
}
