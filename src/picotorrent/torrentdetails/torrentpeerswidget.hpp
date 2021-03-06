#pragma once

#include <memory>

#include "detailstab.hpp"

class QTreeView;

namespace pt
{
    class GeoIP;
    class PeerListModel;
    class TorrentHandle;

    class TorrentPeersWidget : public DetailsTab
    {
    public:
        TorrentPeersWidget(GeoIP* geo);

        virtual void clear() override;
        virtual void refresh(QList<TorrentHandle*> const& torrents) override;

    private:
        QTreeView* m_peersView;
        PeerListModel* m_peersModel;
    };
}
