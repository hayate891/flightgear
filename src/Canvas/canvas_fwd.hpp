// Canvas forward declarations
//
// Copyright (C) 2012  Thomas Geymayer <tomgey@gmail.com>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#ifndef CANVAS_FWD_HPP_
#define CANVAS_FWD_HPP_

#include <boost/function.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>
#include <vector>

class SGPropertyNode;

class Canvas;
typedef boost::shared_ptr<Canvas> CanvasPtr;
typedef boost::weak_ptr<Canvas> CanvasWeakPtr;

class PropertyBasedElement;
typedef boost::shared_ptr<PropertyBasedElement> PropertyBasedElementPtr;
typedef boost::weak_ptr<PropertyBasedElement> PropertyBasedElementWeakPtr;

namespace canvas
{
  class Group;
  class MouseEvent;

  class Placement;
  typedef boost::shared_ptr<Placement> PlacementPtr;
  typedef std::vector<PlacementPtr> Placements;
  typedef boost::function<Placements( const SGPropertyNode*,
                                      CanvasPtr )> PlacementFactory;

  class Window;
  typedef boost::shared_ptr<Window> WindowPtr;
  typedef boost::weak_ptr<Window> WindowWeakPtr;
}

#endif /* CANVAS_FWD_HPP_ */