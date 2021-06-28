// Fill out your copyright notice in the Description page of Project Settings.


#include "ProcedurarTreeDataLibrary.h"

void FMeshSectionData::Empty() {
	Vertices.Empty();
	Triangles.Empty();
	UVs.Empty();
	VertexColors.Empty();
	PivotPaintUVs.Empty();
	Normals.Empty();
	Tangents.Empty();
}