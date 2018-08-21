/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, NSUUID, NSMutableDictionary, NSDictionary, PDFAnnotation, NSLock, NSString, UIColor, NSArray, PDFAccessibilityNode, PDFAKAnnotationAdaptor;

@interface PDFAnnotationPrivateVars : NSObject {

	BOOL loggingEnabled;
	BOOL export;
	PDFPage* page;
	CGPDFDictionaryRef sourceDictionary;
	CFDictionaryRef dictionaryRef;
	NSUUID* pdfAnnotationUUID;
	CGPDFAnnotationRef cgAnnotation;
	NSMutableDictionary* PDFAnnotationDictionary;
	NSDictionary* PDFAnnotationKeyMapping;
	CGPDFFormRef normalAppearance;
	CGPDFFormRef rolloverAppearance;
	CGPDFFormRef downAppearance;
	CGPDFFormRef normalOffAppearance;
	CGPDFFormRef rolloverOffAppearance;
	CGPDFFormRef downOffAppearance;
	BOOL saveAppearance;
	BOOL isSelected;
	BOOL isHighlighted;
	PDFAnnotation* parent;
	PDFAnnotation* popup;
	CGPDFDictionaryRef popupDictionary;
	BOOL popupDrawCloseWidget;
	BOOL popupDrawText;
	CGPath* cgPaths;
	NSLock* pathLock;
	BOOL isSignature;
	BOOL shouldBurnIn;
	NSString* widgetOnStateString;
	id control;
	UIColor* mouseHoverBackgroundColor;
	BOOL restoreLinePoints;
	BOOL restoreQuadPoints;
	CGPoint startPoint;
	CGPoint endPoint;
	NSArray* quadPoints;
	PDFAccessibilityNode* accessibilityNode;
	double scaleFactor;
	BOOL isFullyConstructed;
	BOOL constructingDictionaryRef;
	PDFAKAnnotationAdaptor* akAnnotationAdaptor;
	id<NSCopying> akAnnotationForCopying;

}
@end

