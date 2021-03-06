//
// Created by nima on 13/06/17.
//

#ifndef ATAR_TASKDEFORMABLE_H
#define ATAR_TASKDEFORMABLE_H


#include "src/ar_core/SimTask.h"
#include "src/ar_core/Manipulator.h"

#include <vtkPolyDataMapper.h>
#include <vtkRenderWindow.h>
#include <vtkPolyData.h>
#include <vtkSphereSource.h>
#include <vtkLineSource.h>
#include <vtkImageActor.h>
#include <vtkOrientationMarkerWidget.h>
#include <vtkAxesActor.h>
#include <vtkTransform.h>
#include <vtkSTLReader.h>
#include <vtkProperty.h>
#include <vtkParametricTorus.h>
#include <vtkParametricFunctionSource.h>
#include <vtkCellLocator.h>
#include <vtkTransformPolyDataFilter.h>
#include <vtkCellData.h>
#include <vtkDoubleArray.h>
#include <vtkFloatArray.h>
#include <vtkPolyDataNormals.h>
#include <vtkCornerAnnotation.h>

#include "src/ar_core/Rendering.h"
#include "custom_msgs/ActiveConstraintParameters.h"
#include "custom_msgs/TaskState.h"
#include "src/ar_core/BulletVTKMotionState.h"
#include "src/ar_core/SimSoftObject.h"
#include <ros/ros.h>
#include <std_msgs/Empty.h>

#include <btBulletDynamicsCommon.h>
#include "src/ar_core/SimObject.h"
#include <vtkMinimalStandardRandomSequence.h>
#include <BulletSoftBody/btDefaultSoftBodySolver.h>
#include <BulletSoftBody/btSoftRigidDynamicsWorld.h>
#include <BulletSoftBody/btSoftBodyHelpers.h>
#include <BulletSoftBody/btSoftBodyRigidBodyCollisionConfiguration.h>

#include <memory>


class TaskDeformable : public SimTask{
public:

    explicit TaskDeformable();

    ~TaskDeformable();

    // returns all the task graphics_actors to be sent to the rendering part
    std::vector< vtkSmartPointer <vtkProp> > GetActors() {
        return graphics_actors;
    }

    // updates the task logic and the graphics_actors
    void TaskLoop();

    custom_msgs::TaskState GetTaskStateMsg();

    // resets the number of repetitions and task state;
    void ResetTask();


    // decrements the number of repetitions. Used in case something goes
    // wrong during that repetition.
    void ResetCurrentAcquisition();


    /**
    * \brief This is the function that is handled by the desired pose thread.
     * It first reads the current poses of the tools and then finds the
     * desired pose from the mesh.
  *  **/
    void HapticsThread();

    void InitBullet();

    void StepPhysics();


    void RenderSoftbody(btSoftBody* b, vtkSmartPointer<vtkActor> actor);
private:
    std::vector<std::array<double, 3> > sphere_positions;

    Manipulator *master;

    double board_dimensions[3];
    SimObject* kine_box;
    SimObject* kine_sphere_0;
    SimObject* kine_sphere_1;
    btSoftRigidDynamicsWorld* dynamics_world;

    //keep track of the shapes, we release memory at exit.
    //make sure to re-use collision shapes among rigid bodies whenever possible!
//    btAlignedObjectArray<btCollisionShape*> collisionShapes;
    btSequentialImpulseConstraintSolver* solver;
    btSoftBodySolver* sb_solver;
    btBroadphaseInterface* overlappingPairCache;
    btCollisionDispatcher* dispatcher;
    btSoftBodyRigidBodyCollisionConfiguration* collisionConfiguration;

    SimSoftObject * soft_o0;
    SimSoftObject * soft_o1;
    SimSoftObject * soft_o2;

    ros::Time time_last;
    btSoftBodyWorldInfo *sb_w_info;
    // -------------------------------------------------------------------------
    // graphics

    // for not we use the same type of active constraint for both arms
    custom_msgs::ActiveConstraintParameters ac_parameters;



};

#endif //ATAR_TASKDEFORMABLE_H
