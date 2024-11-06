#ifndef SPIRAL_H
#define SPIRAL_H

namespace spi{
    typedef enum{

    }SpiralState;

    class Spiral{
        private:
        double radius, step;

        double radius(int grade, double radius_previous_grade);

        double step(int grade, double radius);

        public:

        Spiral(int initial_radius, int initial_step){
            radius = initial_radius;
            step = initial_step;
        }



    };
}

#endif