/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011-2014 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "metisDecomp.H"
#include "addToRunTimeSelectionTable.H"
#include "Time.H"

static const char* notImplementedMessage =
"You are trying to use metis but do not have the metisDecomp library loaded."
"\nThis message is from the dummy metisDecomp stub library instead.\n"
"\n"
"Please install metis and make sure that libmetis.so is in your "
"LD_LIBRARY_PATH.\n"
"The metisDecomp library can then be built from "
"$FOAM_SRC/parallel/decompose/metisDecomp and dynamically loading or linking"
" this library will add metis as a decomposition method.\n"
"Please be aware that there are license restrictions on using Metis.";

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
    defineTypeNameAndDebug(metisDecomp, 0);

    addToRunTimeSelectionTable
    (
        decompositionMethod,
        metisDecomp,
        dictionary
    );
}


// * * * * * * * * * * * * * Private Member Functions  * * * * * * * * * * * //

Foam::label Foam::metisDecomp::decompose
(
    const List<label>& adjncy,
    const List<label>& xadj,
    const scalarField& cellWeights,
    List<label>& finalDecomp
)
{
    FatalErrorIn
    (
        "labelList metisDecomp::decompose"
        "("
            "const List<label>&, "
            "const List<label>&, "
            "const scalarField&, "
            "List<label>&"
        ")"
    )   << notImplementedMessage << exit(FatalError);

    return -1;
}


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::metisDecomp::metisDecomp
(
    const dictionary& decompositionDict
)
:
    decompositionMethod(decompositionDict)
{}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

Foam::labelList Foam::metisDecomp::decompose
(
    const polyMesh& mesh,
    const pointField& points,
    const scalarField& pointWeights
)
{
    FatalErrorIn
    (
        "labelList metisDecomp::decompose"
        "("
            "const pointField&, "
            "const scalarField&"
        ")"
    )   << notImplementedMessage << exit(FatalError);

    return labelList();
}


Foam::labelList Foam::metisDecomp::decompose
(
    const polyMesh& mesh,
    const labelList& agglom,
    const pointField& agglomPoints,
    const scalarField& agglomWeights
)
{
    FatalErrorIn
    (
        "labelList metisDecomp::decompose"
        "("
            "const labelList&, "
            "const pointField&, "
            "const scalarField&"
        ")"
    )   << notImplementedMessage << exit(FatalError);

    return labelList();
}


Foam::labelList Foam::metisDecomp::decompose
(
    const labelListList& globalCellCells,
    const pointField& cellCentres,
    const scalarField& cellWeights
)
{
    FatalErrorIn
    (
        "labelList metisDecomp::decompose"
        "("
            "const labelListList&, "
            "const pointField&, "
            "const scalarField&"
        ")"
    )   << notImplementedMessage << exit(FatalError);

    return labelList();
}


// ************************************************************************* //
