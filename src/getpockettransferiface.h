﻿#pragma once

#include <TransferEngine-qt5/transferplugininterface.h>
#include <TransferEngine-qt5/transferplugininfo.h>
#include <TransferEngine-qt5/transfermethodinfo.h>
#include <TransferEngine-qt5/mediatransferinterface.h>

class GetPocketSharePlugin : public QObject
                            , public TransferPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA (IID "harbour.GetPocket.transfer.plugin")
    Q_INTERFACES(TransferPluginInterface)

public:
    GetPocketSharePlugin();
    ~GetPocketSharePlugin();

    QString pluginId() const;
    bool enabled() const;
    TransferPluginInfo* infoObject();
    MediaTransferInterface* transferObject();
};
