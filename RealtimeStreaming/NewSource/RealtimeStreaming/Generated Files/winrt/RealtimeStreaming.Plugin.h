﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180227.3

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH

static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.180227.3"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/RealtimeStreaming.Plugin.2.h"
#include "winrt/RealtimeStreaming.h"

namespace winrt::impl {

template <typename D> void consume_RealtimeStreaming_Plugin_IDirectXManager<D>::Lost() const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Plugin::IDirectXManager)->Lost());
}

template <typename D> void consume_RealtimeStreaming_Plugin_IDirectXManager<D>::Reset() const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Plugin::IDirectXManager)->Reset());
}

template <typename D> void consume_RealtimeStreaming_Plugin_IModule<D>::Shutdown() const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Plugin::IModule)->Shutdown());
}

template <typename D> uint32_t consume_RealtimeStreaming_Plugin_IModuleManager<D>::AddModule(RealtimeStreaming::Plugin::Module const& pluginModule) const
{
    uint32_t result{};
    check_hresult(WINRT_SHIM(RealtimeStreaming::Plugin::IModuleManager)->AddModule(get_abi(pluginModule), &result));
    return result;
}

template <typename D> RealtimeStreaming::Plugin::Module consume_RealtimeStreaming_Plugin_IModuleManager<D>::GetModule(uint32_t moduleHandle) const
{
    RealtimeStreaming::Plugin::Module result{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Plugin::IModuleManager)->GetModule(moduleHandle, put_abi(result)));
    return result;
}

template <typename D> void consume_RealtimeStreaming_Plugin_IModuleManager<D>::ReleaseModule(uint32_t moduleHandle) const
{
    check_hresult(WINRT_SHIM(RealtimeStreaming::Plugin::IModuleManager)->ReleaseModule(moduleHandle));
}

template <typename D> RealtimeStreaming::Plugin::ModuleManager consume_RealtimeStreaming_Plugin_IPluginManager<D>::ModuleManager() const
{
    RealtimeStreaming::Plugin::ModuleManager result{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Plugin::IPluginManager)->get_ModuleManager(put_abi(result)));
    return result;
}

template <typename D> RealtimeStreaming::Plugin::DirectXManager consume_RealtimeStreaming_Plugin_IPluginManager<D>::DirectXManager() const
{
    RealtimeStreaming::Plugin::DirectXManager result{ nullptr };
    check_hresult(WINRT_SHIM(RealtimeStreaming::Plugin::IPluginManager)->get_DirectXManager(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, RealtimeStreaming::Plugin::IDirectXManager> : produce_base<D, RealtimeStreaming::Plugin::IDirectXManager>
{
    HRESULT __stdcall Lost() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Lost();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Reset() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Plugin::IModule> : produce_base<D, RealtimeStreaming::Plugin::IModule>
{
    HRESULT __stdcall Shutdown() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Shutdown();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Plugin::IModuleFactory> : produce_base<D, RealtimeStreaming::Plugin::IModuleFactory>
{};

template <typename D>
struct produce<D, RealtimeStreaming::Plugin::IModuleManager> : produce_base<D, RealtimeStreaming::Plugin::IModuleManager>
{
    HRESULT __stdcall AddModule(void* pluginModule, uint32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<uint32_t>(this->shim().AddModule(*reinterpret_cast<RealtimeStreaming::Plugin::Module const*>(&pluginModule)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetModule(uint32_t moduleHandle, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<RealtimeStreaming::Plugin::Module>(this->shim().GetModule(moduleHandle));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReleaseModule(uint32_t moduleHandle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleaseModule(moduleHandle);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, RealtimeStreaming::Plugin::IPluginManager> : produce_base<D, RealtimeStreaming::Plugin::IPluginManager>
{
    HRESULT __stdcall get_ModuleManager(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<RealtimeStreaming::Plugin::ModuleManager>(this->shim().ModuleManager());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DirectXManager(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<RealtimeStreaming::Plugin::DirectXManager>(this->shim().DirectXManager());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::RealtimeStreaming::Plugin {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::RealtimeStreaming::Plugin::IDirectXManager> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::IDirectXManager> {};
template<> struct hash<winrt::RealtimeStreaming::Plugin::IModule> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::IModule> {};
template<> struct hash<winrt::RealtimeStreaming::Plugin::IModuleFactory> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::IModuleFactory> {};
template<> struct hash<winrt::RealtimeStreaming::Plugin::IModuleManager> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::IModuleManager> {};
template<> struct hash<winrt::RealtimeStreaming::Plugin::IPluginManager> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::IPluginManager> {};
template<> struct hash<winrt::RealtimeStreaming::Plugin::DirectXManager> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::DirectXManager> {};
template<> struct hash<winrt::RealtimeStreaming::Plugin::Module> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::Module> {};
template<> struct hash<winrt::RealtimeStreaming::Plugin::ModuleManager> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::ModuleManager> {};
template<> struct hash<winrt::RealtimeStreaming::Plugin::PluginManager> : winrt::impl::hash_base<winrt::RealtimeStreaming::Plugin::PluginManager> {};

}

WINRT_WARNING_POP
