/**
 * @file scheduler.cpp
 * @brief Implements the `Scheduler` class.
 */

#include "scheduler/scheduler.hpp"


/*** COOPERATIVE SCHEDULER **************************************************************/

template<>
Scheduler<Cooperative>::Scheduler() {}


template<>
void Scheduler<Cooperative>::registerTask(Task *task)
{
}


template<>
void Scheduler<Cooperative>::launch()
{
}


/*** PREEMPTIVE SCHEDULER ***************************************************************/

template<>
Scheduler<Preemptive>::Scheduler() {}
