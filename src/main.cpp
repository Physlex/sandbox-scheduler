/**
 * @file main.cpp
 * @brief This file implements the application entry, and `App` class.
 */

#include "main.hpp"

#include "scheduler/scheduler.hpp"
#include "scheduler/task.hpp"


/*** GLOCALS ****************************************************************************/

Scheduler<Cooperative> App::coopScheduler = Scheduler<Cooperative>();
Scheduler<Preemptive>  App::premScheduler = Scheduler<Preemptive>();


/*** INTERFACE **************************************************************************/

void App::init()
{
    auto testTask = Task();
    App::coopScheduler.registerTask(&testTask);
    App::coopScheduler.registerTask(&testTask);
}


App::StatusKind App::iter()
{
    //! @note Now we "launch" all tasks via context switching.
    return App::StatusKind::Terminate;
}


App::ExitKind App::exit()
{
    return App::ExitKind::Success;
}


/*** ENTRY ******************************************************************************/

int main()
{
    App::init();
    while (static_cast<int8_t>(App::iter())){ /** Intentionally left empty */ }
    return static_cast<int8_t>(App::exit());
}
