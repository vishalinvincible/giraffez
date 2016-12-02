/*
 * Copyright 2016 Capital One Services, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ENCODER_PYTYPES_H
#define __ENCODER_PYTYPES_H

#include <Python.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#if defined(WIN32) || defined(WIN64)
#include <pstdint.h>
#else
#include <stdint.h>
#endif

int giraffez_decimal_import();
int giraffez_datetime_import();

PyObject* giraffez_decimal_from_pystring(PyObject* obj);
PyObject* giraffez_date_from_datetime(int year, int month, int day, int hour, int minute,
    int second, int microsecond);
PyObject* giraffez_time_from_time(int hour, int minute, int second, int microsecond);
PyObject* giraffez_ts_from_datetime(int year, int month, int day, int hour, int minute, int second,
    int microsecond);

#ifdef __cplusplus
}
#endif

#endif