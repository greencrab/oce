// File:	RWStepAP214_RWAppliedGroupAssignment.cxx
// Created:	Wed May 10 15:09:06 2000 
// Author:	Andrey BETENEV
// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1
// Copyright:	Matra Datavision 2000

#include <RWStepAP214_RWAppliedGroupAssignment.ixx>
#include <StepAP214_HArray1OfGroupItem.hxx>
#include <StepAP214_GroupItem.hxx>

//=======================================================================
//function : RWStepAP214_RWAppliedGroupAssignment
//purpose  : 
//=======================================================================

RWStepAP214_RWAppliedGroupAssignment::RWStepAP214_RWAppliedGroupAssignment ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepAP214_RWAppliedGroupAssignment::ReadStep (const Handle(StepData_StepReaderData)& data,
                                                     const Standard_Integer num,
                                                     Handle(Interface_Check)& ach,
                                                     const Handle(StepAP214_AppliedGroupAssignment) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,2,ach,"applied_group_assignment") ) return;

  // Inherited fields of GroupAssignment

  Handle(StepBasic_Group) aGroupAssignment_AssignedGroup;
  data->ReadEntity (num, 1, "group_assignment.assigned_group", ach, STANDARD_TYPE(StepBasic_Group), aGroupAssignment_AssignedGroup);

  // Own fields of AppliedGroupAssignment

  Handle(StepAP214_HArray1OfGroupItem) aItems;
  Standard_Integer sub2 = 0;
  if ( data->ReadSubList (num, 2, "items", ach, sub2) ) {
    Standard_Integer num2 = sub2;
    Standard_Integer nb0 = data->NbParams(num2);
    aItems = new StepAP214_HArray1OfGroupItem (1, nb0);
    for ( Standard_Integer i0=1; i0 <= nb0; i0++ ) {
      StepAP214_GroupItem anIt0;
      data->ReadEntity (num2, i0, "items", ach, anIt0);
      aItems->SetValue(i0, anIt0);
    }
  }

  // Initialize entity
  ent->Init(aGroupAssignment_AssignedGroup,
            aItems);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepAP214_RWAppliedGroupAssignment::WriteStep (StepData_StepWriter& SW,
                                                      const Handle(StepAP214_AppliedGroupAssignment) &ent) const
{

  // Inherited fields of GroupAssignment

  SW.Send (ent->StepBasic_GroupAssignment::AssignedGroup());

  // Own fields of AppliedGroupAssignment

  SW.OpenSub();
  for (Standard_Integer i1=1; i1 <= ent->Items()->Length(); i1++ ) {
    StepAP214_GroupItem Var0 = ent->Items()->Value(i1);
    SW.Send (Var0.Value());
  }
  SW.CloseSub();
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepAP214_RWAppliedGroupAssignment::Share (const Handle(StepAP214_AppliedGroupAssignment) &ent,
                                                  Interface_EntityIterator& iter) const
{

  // Inherited fields of GroupAssignment

  iter.AddItem (ent->StepBasic_GroupAssignment::AssignedGroup());

  // Own fields of AppliedGroupAssignment

  for (Standard_Integer i2=1; i2 <= ent->Items()->Length(); i2++ ) {
    StepAP214_GroupItem Var0 = ent->Items()->Value(i2);
    iter.AddItem (Var0.Value());
  }
}
