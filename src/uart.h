/*! \addtogroup UART UART Driver
 *
 * \ingroup PERIPHERAL
 * @{
 * \details This is the UART perhipheral driver.
 *
 */

/*! \file
 * \details This file is the UART peripheral driver header file.
 */

#ifndef UART_H_
#define UART_H_

/*! \details This function opens the specified UART port.
 * \return Zero if the port opened successfully.
 */
int uart_open(int port /*! The port to open */, int mode /*! The mode for the UART */);

/*! \details This function opens the specified UART port.
 * \return The number of bytes read
 */
int uart_rd(int port /*! The port to read */,
     void * dest /*! A pointer to the destination memory */,
     int size /*! The number of bytes to read */);

/*! \details This function opens the specified UART port.
 * \return The number of bytes written
 */
int uart_wr(int port /*! The port to write */,
     void * src /*! A pointer to the source memory */,
     int size /*! The number of bytes to write */);

/*! \details This function opens the specified UART port.
 */
void uart_close(int port /*! The port to close */);

#endif