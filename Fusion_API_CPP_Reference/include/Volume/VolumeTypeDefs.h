//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2025 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once

namespace adsk { namespace volume {

/// Types of interpolation functions for the control point maps.
enum ControlPointInterpolators
{
    /// The point values are interpolated linearly.
    LinearInterpolator,
    /// The value is set to the value of whichever point is nearest.
    NearestInterpolator,
    /// Point are interpolated using a cubic function.
    CubicInterpolator,
    /// Points are interpolated with smooth tangent transitions.
    SmoothInterpolator
};

/// Types of graph output nodes for the main graph.
enum GraphOutputNodeTypes
{
    /// Scalar. Distance field of the boundary object of the model.
    /// Only used in the primary graph.
    BoundarySDFOutputNodeType,
    /// Scalar. Density/solidity of the volumetric model lattice at all points within it.
    /// Only used in the primary graph.
    LatticeDensityOutputNodeType,
    /// RGBA. The color of the model at all points within it.
    /// Only used in the primary graph.
    ColorOutputNodeType,
    /// Vector3. The coordinate system for the lattice cells. Mapping from the global xyz coordinates to lattice cell coordinates.
    /// Only used in the primary graph.
    LatticeCoordinatesOutputNodeType,
    /// Scalar. Strength of the volumetric model texture at all points within it.
    /// Only used in the primary graph.
    TextureDensityOutputNodeType,
    /// Vector3. The coordinate system for the volumetric texture cells. Mapping from the global xyz coordinates to texture cell coordinates.
    /// Only used in the primary graph.
    TextureCoordinatesOutputNodeType,
    /// Scalar. Defines the shape of the volumetric lattice cell.
    /// Only used in the cell graph.
    CellLatticeShapeOutputNodeType,
    /// Scalar. Defines the shape of the volumetric texture cell.
    /// Only used in the cell graph.
    CellTextureShapeOutputNodeType
};

/// Graph types for a volumetric model.
enum GraphTypes
{
    /// The main graph containing the boundary, density, colour and UVW mapping subgraphs.
    PrimaryGraphType,
    /// The graph for the cell that is repeated across the volume.
    CellGraphType
};

/// Different types that graph nodes input and output types can be.
enum NodePinTypes
{
    NoNodePinType,
    ScalarNodePinType,
    VectorNodePinType,
    ColorNodePinType
};

}// namespace volume
}// namespace adsk
