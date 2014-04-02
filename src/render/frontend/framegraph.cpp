/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "framegraph.h"
#include "entity.h"

QT_BEGIN_NAMESPACE

namespace Qt3D {

/*!
 * \class FrameGraph
 *
 * \brief Component that has an activeFrameGraph property that should
 * reference the root FrameGraphItem of a frame graph tree. The Entity
 * that contains a FrameGraph property defines the rendering method to
 * be used by the renderer.
 *
 * Note that only a single FrameGraph can be active at any moment.
 *
 * \since 5.3
 * \namespace Qt3D
 */

FrameGraph::FrameGraph(Node *parent) :
    Qt3D::Component(parent),
    m_activeFrameGraph(Q_NULLPTR)
{
}

/*!
 * Returns the current activeFrameGraph root node.
 */
FrameGraphItem *FrameGraph::activeFrameGraph() const
{
    return m_activeFrameGraph;
}

/*!
 * Sets the root node \a activeFrameGraph of the FrameGraph.
 */
void FrameGraph::setActiveFrameGraph(FrameGraphItem *activeFrameGraph)
{
    if (activeFrameGraph != m_activeFrameGraph) {
        m_activeFrameGraph = activeFrameGraph;
        emit activeFrameGraphChanged();
    }
}

} // Qt3D

QT_END_NAMESPACE
