/*
 * AboutForm.h
 *
 *  Created on: 16.01.2014
 *      Author: ddreval
 */

#ifndef ABOUTFORM_H_
#define ABOUTFORM_H_

#include <FUi.h>

class AboutForm :
 	public Osp::Ui::IActionEventListener,
 	public Osp::Ui::Controls::Form {

	public:
		AboutForm();
		virtual ~AboutForm();
		virtual result OnInitializing(void);
		bool Initialize(void);
		virtual void OnActionPerformed(const Osp::Ui::Control &source, int actionId);

	public:
		static const int SELECTED_BACK = 41;

};

#endif /* ABOUTFORM_H_ */