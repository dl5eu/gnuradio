/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(fosphor_formatter.h) */
/* BINDTOOL_HEADER_FILE_HASH(2c28006e177227780f16af6897d7633b) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/qtgui/fosphor_formatter.h>
// pydoc.h is automatically generated in the build directory
#include <fosphor_formatter_pydoc.h>

void bind_fosphor_formatter(py::module& m)
{

    using fosphor_formatter = ::gr::qtgui::fosphor_formatter;

    py::class_<fosphor_formatter, gr::hier_block2, std::shared_ptr<fosphor_formatter>>(
        m, "fosphor_formatter", D(fosphor_formatter))

        .def(py::init(&fosphor_formatter::make),
             py::arg("fft_size"),
             py::arg("num_bins"),
             py::arg("input_decim"),
             py::arg("waterfall_decim"),
             py::arg("histo_decim"),
             py::arg("scale"),
             py::arg("alpha"),
             py::arg("epsilon"),
             py::arg("trise"),
             py::arg("tdecay"),
             D(fosphor_formatter, make))

        ;
}