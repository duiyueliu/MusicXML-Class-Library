// MusicXML Class Library
// Copyright (c) by Matthew James Briggs
// Distributed under the MIT License

#pragma once

#include "mx/core/ForwardDeclare.h"
#include "mx/core/AttributesInterface.h"
#include "mx/core/Strings.h"

#include <iosfwd>
#include <memory>
#include <vector>

namespace mx
{
    namespace core
    {

        MX_FORWARD_DECLARE_ATTRIBUTES( InstrumentAttributes )

        struct InstrumentAttributes : public AttributesInterface
        {
        public:
            InstrumentAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            XsIDREF id;
            const bool hasId;

            private:
            virtual bool fromXElementImpl( std::ostream& message, xml::XElement& xelement );
        };
    }
}
