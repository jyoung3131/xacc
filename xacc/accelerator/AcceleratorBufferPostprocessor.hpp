/*******************************************************************************
 * Copyright (c) 2018 UT-Battelle, LLC.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompanies this
 * distribution. The Eclipse Public License is available at
 * http://www.eclipse.org/legal/epl-v10.html and the Eclipse Distribution License
 * is available at https://eclipse.org/org/documents/edl-v10.php
 *
 * Contributors:
 *   Alexander J. McCaskey - initial API and implementation
 *******************************************************************************/
#ifndef XACC_ACCELERATOR_ACCELERATORBUFFERPOSTPROCESSOR_HPP_
#define XACC_ACCELERATOR_ACCELERATORBUFFERPOSTPROCESSOR_HPP_

#include "AcceleratorBuffer.hpp"

namespace xacc {
class AcceleratorBufferPostprocessor {
public:
	virtual std::vector<std::shared_ptr<AcceleratorBuffer>> process(std::vector<std::shared_ptr<AcceleratorBuffer>> buffers) = 0;
	virtual ~AcceleratorBufferPostprocessor(){}
};
}
#endif
