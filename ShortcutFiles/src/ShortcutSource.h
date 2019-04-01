/**
 * \brief Header for Shortcut Glade Main Source code
 * \details Included to provide global variables and function prototypes
 * \author Brandon Mord
 * \date 2017 - 2019
 */
 /** \defgroup ShortcutSource
  * @brief Shortcut global variables, includes, and prototypes
  * @{
  */
#include <gtk/gtk.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

GtkButton *btnRunProgram, ///<Pointer to Run SmartSealz Button
          *btnRunProgramDemo, ///< Pointer to Run SmartSealz Demo Button
          *btnUpdateProgram,  ///< Pointer to Run Dynamic Update Button
          *btnCheckConnections; ///< Pointer to Check Connection Button

/** @addtogroup func functions
 * Function Definitions
 *@{
 */

/** on_runProgram
 * @brief Run program with flight error bounds
 */
void on_runProgram();
/** on_runProgramDemo
 * @brief Run program with ground based demo error bounds
 */
void on_runProgramDemo();
/** on_updateProgram
 * @brief Connect to source to download updates and recompile Project
 */
void on_updateProgram();
/** on_checkConnections
 * @brief Check connnections with secondary devices
 */
void on_checkConnections();
/** on_window_main_destroy
 * @brief Glade standard for destroying window after closing the on_window_main_destroy
 */
void on_window_main_destroy();
/** @} */ /*end of func*/

/** @} */ /*end of SHortcutSource*/
