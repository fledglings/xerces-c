/*
 * Copyright 1999-2000,2004 The Apache Software Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id$
 */

#pragma once

#include <xercesc/util/XMemory.hpp>

XERCES_CPP_NAMESPACE_BEGIN

//	Abstract class for files. This is be used to allow multiple file handling implementations.
class XMLAbstractFile : public XMemory
{
    public:
        XMLMacAbstractFile() {}
        virtual ~XMLMacAbstractFile() {}

        virtual unsigned long currPos() = 0;
        virtual void close() = 0;
        virtual unsigned long size() = 0;
        virtual bool open(const XMLCh* path, bool toWrite = false) = 0;
        virtual bool open(const char* path, bool toWrite = false) = 0;
        virtual unsigned long read(unsigned long byteCount, XMLByte* buffer) = 0;
        virtual void write(unsigned long byteCount, const XMLByte* buffer) = 0;
        virtual void reset() = 0;
};

XERCES_CPP_NAMESPACE_END