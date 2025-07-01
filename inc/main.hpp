/**
 * @file main.hpp
 * @brief This file defines the `App` class.
 */

#ifndef APP_MAIN_HPP_
#define APP_MAIN_HPP_

#include <stdint.h>

#include "scheduler/scheduler.hpp"


/*** CLASSES ****************************************************************************/

class App
{
  public:
    /** @enum StatusKind
     *  @brief TODO: DOCS
     */
    enum class StatusKind
    {
        /** @memberof StatusKind
         *  @brief TODO: DOCS
         */
        Continue=0,

        /** @memberof StatusKind
         *  @brief TODO: DOCS
         */
        Terminate=1,
    };

    /** @enum ExitKind
     *  @brief TODO: DOCS
     */
    enum class ExitKind
    {
        /** @memberof ExitKind
         *  @brief TODO: DOCS
         */
        Success=0,
    };


  public:
    /** @fn static void init()
     *  @brief Initializes the App.
     */
    static void init();

    /** @fn static StatusKind iter()
     *  @brief Advances the App state by one tick.
     * 
     *         Called via the entry handler once per "tick", where a tick is an
     *         unspecified period of time.
     */
    static StatusKind iter();

    /** @fn static ExitKind exit()
     *  @brief Terminates the Application.
     */
    static ExitKind exit();


  protected:
    //! @brief Deleted constructor.
    App() = delete;

    //! @brief Deleted copy constructor.
    App(const App &rhs) = delete;

    //! @brief Deleted assignment operator.
    App &operator=(const App &rhs) = delete;

  private:
    static Scheduler<Cooperative> coopScheduler;
    static Scheduler<Preemptive> premScheduler;
};

#endif  // APP_MAIN_HPP_
