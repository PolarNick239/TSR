/*
 * Copyright (C) 2017 by Author: Aroudj, Samir
 * TU Darmstadt - Graphics, Capture and Massively Parallel Computing
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD 3-Clause license. See the License.txt file for details.
 */

#include "SurfaceReconstruction/Scene/IReconstructorObserver.h"

using namespace SurfaceReconstruction;

const char *IReconstructorObserver::RECONSTRUCTION_TYPE_TEXTS[RECONSTRUCTION_TYPE_COUNT] =
{
	"Crust",
	"ReconstructionViaPhotos",
	"ReconstructionViaSamples"
};