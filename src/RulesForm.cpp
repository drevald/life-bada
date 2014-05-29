/*
 * RulesForm.cpp
 *
 *  Created on: 17.01.2014
 *      Author: ddreval
 */

#include "RulesForm.h"
#include "Constants.h"

using namespace Osp::Base;
using namespace Osp::Base::Collection;
using namespace Osp::Ui::Controls;
using namespace Osp::Graphics;
using namespace Osp::App;

RulesForm::RulesForm() {
	FORM_EVENT_CODE = EVENT_APPLY_RULES;
	LABEL_TEXT = Constants::GetString(STRING_GAME_RULES);
}

RulesForm::~RulesForm() {
	// TODO Auto-generated destructor stub
}


result
RulesForm::OnInitializing(void) {

	SetBackgroundColor(GetColorModel()->formBkgColor);
	__list = static_cast<List *>(GetControl("IDC_LIST"));
	return E_SUCCESS;
}

bool
RulesForm::Initialize(void) {
	return true;
}

void
RulesForm::PopulateList(void) {
	AppLog("RulesForm::PopulateList");
}


