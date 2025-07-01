/**
 * @file scheduler.hpp
 * @brief This file defines the `Scheduler` class.
 * 
 *        TODO: DOCS
 */

#ifndef SCHEDULER_SCHEDULER_HPP_
#define SCHEDULER_SCHEDULER_HPP_

#include <stdint.h>


/*** DEFINITIONS ************************************************************************/

//! @brief Forward definition of task base class in `scheduler/task.hpp`
struct Task;


/*** CLASSES ****************************************************************************/

/** @struct Cooperative
 *  @brief Cooperative type specifier for Scheduler class.
 */
struct Cooperative {};


/** @struct Preemptive
 *  @brief Preemptive type specifier for Scheduler class.
 */
struct Preemptive  {};


/** @class Scheduler
 *  @tparam SchedulerT
 *  @brief TODO: DOCS
 */
template<class SchedulerT>
class Scheduler
{
  public:
    //! @brief Default constructor
    Scheduler();

    /** @fn void registerTask(Task *)
     *  @brief TODO: DOCS
     */
    void registerTask(Task *task);

    /** @fn void launch()
     *  @brief TODO: DOCS
     */
    void launch();
};


#endif  // SCHEDULER_SCHEDULER_HPP_
