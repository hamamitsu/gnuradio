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

#include <gnuradio/blocks/annotator_1to1.h>
// pydoc.h is automatically generated in the build directory
#include <annotator_1to1_pydoc.h>

void bind_annotator_1to1(py::module& m)
{

    using annotator_1to1 = ::gr::blocks::annotator_1to1;


    py::class_<annotator_1to1,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<annotator_1to1>>(m, "annotator_1to1", D(annotator_1to1))

        .def(py::init(&annotator_1to1::make),
             py::arg("when"),
             py::arg("sizeof_stream_item"),
             D(annotator_1to1, make))


        .def("data", &annotator_1to1::data, D(annotator_1to1, data))

        ;
}