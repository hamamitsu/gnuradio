/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/adaptive_algorithm_lms.h>
// pydoc.h is automatically generated in the build directory
#include <adaptive_algorithm_lms_pydoc.h>

void bind_adaptive_algorithm_lms(py::module& m)
{

    using adaptive_algorithm_lms = ::gr::digital::adaptive_algorithm_lms;


    py::class_<adaptive_algorithm_lms,
               gr::digital::adaptive_algorithm,
               std::shared_ptr<adaptive_algorithm_lms>>(
        m, "adaptive_algorithm_lms", D(adaptive_algorithm_lms))

        .def(py::init(&adaptive_algorithm_lms::make),
             py::arg("cons"),
             py::arg("step_size"),
             D(adaptive_algorithm_lms, make))


        .def("update_taps",
             &adaptive_algorithm_lms::update_taps,
             py::arg("taps"),
             py::arg("in"),
             py::arg("error"),
             py::arg("decision"),
             py::arg("num_taps"),
             D(adaptive_algorithm_lms, update_taps))


        .def("update_tap",
             &adaptive_algorithm_lms::update_tap,
             py::arg("tap"),
             py::arg("u_n"),
             py::arg("err"),
             py::arg("decision"),
             D(adaptive_algorithm_lms, update_tap))


        .def("initialize_taps",
             &adaptive_algorithm_lms::initialize_taps,
             py::arg("taps"),
             D(adaptive_algorithm_lms, initialize_taps))

        ;
}
