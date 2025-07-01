/**
 * @file scheduler.cpp
 * @brief Implements the `Scheduler` class.
 */

#include "scheduler/scheduler.hpp"


/*** COOPERATIVE SCHEDULER **************************************************************/

template<>
Scheduler<Cooperative>::Scheduler() {}


/*** PREEMPTIVE SCHEDULER ***************************************************************/

template<>
Scheduler<Preemptive>::Scheduler() {}
