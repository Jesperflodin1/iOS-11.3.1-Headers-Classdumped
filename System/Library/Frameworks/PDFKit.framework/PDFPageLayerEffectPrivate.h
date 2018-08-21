/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFPageLayerInterface;
#import <PDFKit/PDFKit-Structs.h>
@class NSUUID, PDFAnnotation, NSMutableDictionary, PDFSelection, CALayer, PDFTimer;

@interface PDFPageLayerEffectPrivate : NSObject {

	id<PDFPageLayerInterface> pageLayer;
	NSUUID* uuid;
	CGRect pageFrame;
	BOOL shouldRotateContent;
	PDFAnnotation* annotation;
	NSMutableDictionary* markupEffectLayers;
	PDFSelection* selection;
	NSMutableDictionary* selectionEffectLayers;
	BOOL showTextSelectionHandle;
	SCD_Struct_PD18 pageInfo;
	CALayer* rootSelectionLayer;
	CALayer* selectionStartHandle;
	CALayer* selectionEndHandle;
	PDFTimer* zoomTimer;
	CALayer* textMagnifierLayer;
	CGImageRef magnifierImageMask;
	CGSize magnifierSize;
	CALayer* lollipopMagnifierLayer;
	CGImageRef lollipopImageMask;
	CGSize lollipopSize;

}
@end

