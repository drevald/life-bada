#ifndef _LIFE_H_
#define _LIFE_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>

#include "Evolution.h"

#include "AboutForm.h"
#include "LifeForm.h"
#include "SettingsForm.h"
#include "RulesForm.h"
#include "AbstractSettingsForm.h"
#include "DemoForm.h"

#include "forms/NewColorForm.h"
#include "forms/NewSurfaceForm.h"
#include "forms/NewSpeedForm.h"
#include "forms/NewCellSizeForm.h"


/**
 * [Life] application must inherit from Application class
 * which provides basic features necessary to define an application.
 */
class Life :
	public Osp::App::Application,
	public Osp::System::IScreenEventListener
{

public:
		static Osp::App::Application* CreateInstance(void);

public:
	Life();
	~Life();

public:

	// Called when the application is initializing.
	bool OnAppInitializing(Osp::App::AppRegistry& appRegistry);

	// Called when the application is terminating.
	bool OnAppTerminating(Osp::App::AppRegistry& appRegistry, bool forcedTermination = false);

	// Called when the application's frame moves to the top of the screen.
	void OnForeground(void);

	// Called when this application's frame is moved from top of the screen to the background.
	void OnBackground(void);

	// Called when the system memory is not sufficient to run the application any further.
	void OnLowMemory(void);

	// Called when the battery level changes.
	void OnBatteryLevelChanged(Osp::System::BatteryLevel batteryLevel);

	// Called when the screen turns on.
	void OnScreenOn (void);

	// Called when the screen turns off.
	void OnScreenOff (void);

private:

	virtual void OnUserEventReceivedN (RequestId requestId, Osp::Base::Collection::IList *pArgs);


private:
	Osp::Ui::Controls::Frame* lifeFrame;
	LifeForm* lifeForm;
	SettingsForm* settingsForm;
	AboutForm* aboutForm;
	RulesForm* rulesForm;
	AbstractSettingsForm* abstractSettingsForm;
	NewColorForm* newColorForm;
	NewSurfaceForm* newSurfaceForm;
	NewCellSizeForm* newCellSizeForm;
	NewSpeedForm* newSpeedForm;
	DemoForm* demoForm;

	Evolution* evolution;

private:
//	Osp::Base::String& suspendString;//(L"SUSPEND");
//	Osp::Base::String& resumeString;//(L"SUSPEND");

};

#endif
