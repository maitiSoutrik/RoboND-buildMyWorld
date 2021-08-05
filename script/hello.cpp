#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public worldPlugin
  {
  	public: WorldPluginMyRobot() : WorldPlugin(){
    	printf("Welcome to Doctor Boom's Lab!\n");
       }
     public:void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf){}
  };
  GZ REGISTER WORLD PLUGIN(WorldPluginMyRobot)
}