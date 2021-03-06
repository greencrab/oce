// File:	RWStepAP203_RWCcDesignApproval.cxx
// Created:	Fri Nov 26 16:26:31 1999 
// Author:	Andrey BETENEV
// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.0
// Copyright:	Matra Datavision 1999

#include <RWStepAP203_RWCcDesignApproval.ixx>
#include <StepAP203_HArray1OfApprovedItem.hxx>
#include <StepAP203_ApprovedItem.hxx>

//=======================================================================
//function : RWStepAP203_RWCcDesignApproval
//purpose  : 
//=======================================================================

RWStepAP203_RWCcDesignApproval::RWStepAP203_RWCcDesignApproval ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepAP203_RWCcDesignApproval::ReadStep (const Handle(StepData_StepReaderData)& data,
                                               const Standard_Integer num,
                                               Handle(Interface_Check)& ach,
                                               const Handle(StepAP203_CcDesignApproval) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,2,ach,"cc_design_approval") ) return;

  // Inherited fields of ApprovalAssignment

  Handle(StepBasic_Approval) aApprovalAssignment_AssignedApproval;
  data->ReadEntity (num, 1, "approval_assignment.assigned_approval", ach, STANDARD_TYPE(StepBasic_Approval), aApprovalAssignment_AssignedApproval);

  // Own fields of CcDesignApproval

  Handle(StepAP203_HArray1OfApprovedItem) aItems;
  Standard_Integer sub2 = 0;
  if ( data->ReadSubList (num, 2, "items", ach, sub2) ) {
    Standard_Integer num2 = sub2;
    Standard_Integer nb0 = data->NbParams(num2);
    aItems = new StepAP203_HArray1OfApprovedItem (1, nb0);
    for ( Standard_Integer i0=1; i0 <= nb0; i0++ ) {
      StepAP203_ApprovedItem anIt0;
      data->ReadEntity (num2, i0, "items", ach, anIt0);
      aItems->SetValue(i0, anIt0);
    }
  }

  // Initialize entity
  ent->Init(aApprovalAssignment_AssignedApproval,
            aItems);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepAP203_RWCcDesignApproval::WriteStep (StepData_StepWriter& SW,
                                                const Handle(StepAP203_CcDesignApproval) &ent) const
{

  // Inherited fields of ApprovalAssignment

  SW.Send (ent->StepBasic_ApprovalAssignment::AssignedApproval());

  // Own fields of CcDesignApproval

  SW.OpenSub();
  for (Standard_Integer i1=1; i1 <= ent->Items()->Length(); i1++ ) {
    StepAP203_ApprovedItem Var0 = ent->Items()->Value(i1);
    SW.Send (Var0.Value());
  }
  SW.CloseSub();
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepAP203_RWCcDesignApproval::Share (const Handle(StepAP203_CcDesignApproval) &ent,
                                            Interface_EntityIterator& iter) const
{

  // Inherited fields of ApprovalAssignment

  iter.AddItem (ent->StepBasic_ApprovalAssignment::AssignedApproval());

  // Own fields of CcDesignApproval

  for (Standard_Integer i2=1; i2 <= ent->Items()->Length(); i2++ ) {
    StepAP203_ApprovedItem Var0 = ent->Items()->Value(i2);
    iter.AddItem (Var0.Value());
  }
}
