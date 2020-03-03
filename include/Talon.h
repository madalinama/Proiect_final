#ifndef TALON_H
#define TALON_H
#include <vector>


class Talon
{
    public:
        Talon(std::vector<int> talon_user);
        virtual ~Talon();


    protected:

    private:
         std::vector<int>talon;


};

#endif // TALON_H
