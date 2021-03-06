
#include <RWStepGeom_RWPcurve.ixx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepGeom_Pcurve.hxx>


RWStepGeom_RWPcurve::RWStepGeom_RWPcurve () {}

void RWStepGeom_RWPcurve::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepGeom_Pcurve)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,3,ach,"pcurve")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- own field : basisSurface ---

	Handle(StepGeom_Surface) aBasisSurface;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadEntity(num, 2,"basis_surface", ach, STANDARD_TYPE(StepGeom_Surface), aBasisSurface);

	// --- own field : referenceToCurve ---

	Handle(StepRepr_DefinitionalRepresentation) aReferenceToCurve;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 3,"reference_to_curve", ach, STANDARD_TYPE(StepRepr_DefinitionalRepresentation), aReferenceToCurve);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aBasisSurface, aReferenceToCurve);
}


void RWStepGeom_RWPcurve::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepGeom_Pcurve)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- own field : basisSurface ---

	SW.Send(ent->BasisSurface());

	// --- own field : referenceToCurve ---

	SW.Send(ent->ReferenceToCurve());
}


void RWStepGeom_RWPcurve::Share(const Handle(StepGeom_Pcurve)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->BasisSurface());


	iter.GetOneItem(ent->ReferenceToCurve());
}

