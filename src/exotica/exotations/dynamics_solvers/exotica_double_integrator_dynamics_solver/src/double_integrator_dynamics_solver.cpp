//
// Copyright (c) 2019, Wolfgang Merkt
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//  * Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of  nor the names of its contributors may be used to
//    endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//

#include <exotica_double_integrator_dynamics_solver/double_integrator_dynamics_solver.h>

REGISTER_DYNAMICS_SOLVER_TYPE("DoubleIntegratorDynamicsSolver", exotica::DoubleIntegratorDynamicsSolver)

namespace exotica
{
DoubleIntegratorDynamicsSolver::DoubleIntegratorDynamicsSolver() = default;

void DoubleIntegratorDynamicsSolver::AssignScene(ScenePtr scene_in)
{
    const int num_positions_in = scene_in->GetKinematicTree().GetNumControlledJoints();

    num_positions_ = num_positions_in;
    num_velocities_ = num_positions_in;
    num_controls_ = num_positions_in;

    // Cf. https://en.wikipedia.org/wiki/Double_integrator
    A_ = Eigen::MatrixXd::Zero(num_positions_ + num_velocities_, num_positions_ + num_velocities_);
    A_.topRightCorner(num_velocities_, num_velocities_) = Eigen::MatrixXd::Identity(num_velocities_, num_velocities_);

    B_ = Eigen::MatrixXd::Zero(num_positions_ + num_velocities_, num_controls_);
    B_.bottomRightCorner(num_controls_, num_controls_) = Eigen::MatrixXd::Identity(num_controls_, num_controls_);
}

Eigen::VectorXd DoubleIntegratorDynamicsSolver::f(const StateVector& x, const ControlVector& u)
{
    return A_ * x + B_ * u;
}

Eigen::MatrixXd DoubleIntegratorDynamicsSolver::fx(const StateVector& x, const ControlVector& u)
{
    return A_;
}

Eigen::MatrixXd DoubleIntegratorDynamicsSolver::fu(const StateVector& x, const ControlVector& u)
{
    return B_;
}

}  // namespace exotica
