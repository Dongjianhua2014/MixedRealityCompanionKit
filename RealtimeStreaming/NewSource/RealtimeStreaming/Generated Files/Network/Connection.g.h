﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/RealtimeStreaming.h"
#include "winrt/Windows.Networking.Sockets.h"
#include "winrt/RealtimeStreaming.Plugin.h"
#include "winrt/Windows.Storage.Streams.h"
#include "winrt/RealtimeStreaming.Network.h"

namespace winrt::RealtimeStreaming::Network::implementation {

template <typename D, typename B, typename... I>
struct WINRT_EBO Connection_base : implements<D, RealtimeStreaming::Network::IConnection, B, no_module_lock, I...>
{
    using base_type = Connection_base;
    using class_type = RealtimeStreaming::Network::Connection;
    using implements_type = typename Connection_base::implements_type;
    using implements_type::implements_type;
    
    operator class_type() const noexcept
    {
        static_assert(std::is_same_v<typename impl::implements_default_interface<D>::type, impl::default_interface_t<class_type>>);
        class_type result{ nullptr };
        attach_abi(result, detach_abi(static_cast<impl::default_interface_t<class_type>>(*this)));
        return result;
    }

    hstring GetRuntimeClassName() const
    {
        return L"RealtimeStreaming.Network.Connection";
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_CONNECTION_XAML_G_H) || __has_include("Network/Connection.xaml.g.h")

#include "Network/Connection.xaml.g.h"

#else

namespace winrt::RealtimeStreaming::Network::implementation
{
    template <typename D, typename... I>
    using ConnectionT = Connection_base<D, I...>;
}

#endif
