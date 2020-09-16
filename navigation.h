

#include <memory>




namespace Wander{

    class Map;

    class Point;

    class Status;

    class Strategy
    {

        virtual Status GetStatus()  const=0;

        virtual~ Strategy() {}


    };

    class Controller 
    {
        virtual Map GetMap() const=0;

        virtual void Move(const Point& endpoint, std::unique_ptr<Strategy> strategy)=0; 

        virtual~ Controller() {}
    };


}
