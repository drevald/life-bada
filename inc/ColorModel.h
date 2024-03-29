/*
 * ColorModel.h
 *
 *  Created on: 23.05.2014
 *      Author: ddreval
 */

#ifndef COLORMODEL_H_
#define COLORMODEL_H_

#include <FBase.h>
#include <FApp.h>

#include <FUi.h>

using Osp::Graphics::Color;
using Osp::Graphics::Bitmap;

class ColorModel {

	public:
		ColorModel();
		ColorModel(int id);
		static ColorModel* GetInstance(int id);
		static ColorModel* GetModel();
		virtual ~ColorModel();

	public:

		int id;

		Color formBkgColor;
		Color controlNormalBkgColor;
		Color controlPressedBkgColor;
		Color formTextColor;
		Color textColor;
		Color cellColor;

		Bitmap normalBackgroundBitmap;
		Bitmap pressedBackgroundBitmap;

		Bitmap* conwayBitmap;
		Bitmap* surfaceThorBitmap;
		Bitmap* surfaceKleinBitmap;
		Bitmap* surfaceProjectiveBitmap;
		Bitmap* sizeThreeBitmap;
		Bitmap* sizeFiveBitmap;
		Bitmap* sizeTenBitmap;
		Bitmap* sizeTwentyBitmap;
		Bitmap* colorXrayBitmap;
		Bitmap* colorAmberBitmap;
		Bitmap* colorGreenBitmap;

	private:

		static ColorModel* __greenInstance;
		static ColorModel* __amberInstance;
		static ColorModel* __xrayInstance;


};

#endif /* COLORMODEL_H_ */

