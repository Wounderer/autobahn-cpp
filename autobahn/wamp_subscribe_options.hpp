///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Crossbar.io Technologies GmbH and contributors
//
// Boost Software License - Version 1.0 - August 17th, 2003
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef AUTOBAHN_WAMP_SUBSCRIBE_OPTIONS_HPP
#define AUTOBAHN_WAMP_SUBSCRIBE_OPTIONS_HPP

#include <boost/optional.hpp>

namespace autobahn {

class wamp_subscribe_options
{
public:
    wamp_subscribe_options();

    //Convenience constructor
    wamp_subscribe_options(const std::string& match);

    wamp_subscribe_options(wamp_subscribe_options&& other) = delete;
    wamp_subscribe_options(const wamp_subscribe_options& other) = delete;
    wamp_subscribe_options& operator=(wamp_subscribe_options&& other) = delete;
    wamp_subscribe_options& operator=(const wamp_subscribe_options& other) = delete;

    const std::string& match() const;
    void set_match(const std::string& match);
    const bool is_match_set() const;

private:
    boost::optional<std::string> m_match;
};

} // namespace autobahn

#include "wamp_subscribe_options.ipp"

#endif // AUTOBAHN_WAMP_SUBSCRIBE_OPTIONS_HPP

