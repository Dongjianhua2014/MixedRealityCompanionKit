// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "DataBundleArgs.h"

using namespace winrt;
using namespace RealtimeStreaming::Network::implementation;

_Use_decl_annotations_
DataBundleArgs::DataBundleArgs(
    PayloadType operation,
    Connection connection,
    DataBundle bundle)
    : m_payloadType(operation),
    m_connection(connection),
    m_bundle(bundle)
{
    Log(Log_Level_Info, L"DataBundleArgsImpl::DataBundleArgsImpl()\n");
}

DataBundleArgs::~DataBundleArgs()
{
    Log(Log_Level_Info, L"DataBundleArgsImpl::~DataBundleArgsImpl()\n");
}

RealtimeStreaming::PayloadType PayloadType() 
{
    return m_payloadType;
}

Connection::PayloadType DataConnection(); 
{
    return m_connection;
}

DataBundle::PayloadType Bundle() 
{
    return m_bundle;
}
