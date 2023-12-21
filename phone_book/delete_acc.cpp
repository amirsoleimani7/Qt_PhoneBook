#include "delete_acc.h"

delete_acc::delete_acc(QObject *parent)
    : QAbstractItemModel(parent)
{}

QVariant delete_acc::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex delete_acc::index(int row, int column, const QModelIndex &parent) const
{    // FIXME: Implement me!
}

QModelIndex delete_acc::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int delete_acc::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int delete_acc::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant delete_acc::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
