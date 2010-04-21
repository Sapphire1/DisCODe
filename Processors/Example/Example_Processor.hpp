/*!
 * \file Example_Processor.hpp
 * \brief Declaration of an example class, responsible for image processing.
 * \author tkornuta
 * \date 11.03.2008
 */

#ifndef EXAMPLE_PROCESSOR_HPP_
#define EXAMPLE_PROCESSOR_HPP_

#include "Kernel_Aux.hpp"
#include "DataProcessor.hpp"
#include "Panel_Empty.hpp"
#include "StringState.hpp"

namespace Processors {
namespace Example {

/*!
 * \class Example_Processor
 * \brief Example processor class.
 * \author tkornuta
 */
class Example_Processor: public Base::DataProcessor
{
public:
	/*!
	 * Constructor.
	 */
	Example_Processor();

	/*!
	 * Processes given frame.
	 */
	void* processData(const void* data_);

};

}//: namespace Example
}//: namespace Processors


/*
 * Register processor kernel.
 */
REGISTER_PROCESSOR_KERNEL("Example", Processors::Example::Example_Processor, Common::Panel_Empty, Common::StringState::instance())

#endif
