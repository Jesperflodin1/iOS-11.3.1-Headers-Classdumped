/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class CHDTitle, OADGraphicProperties, EDResources, NSArray, NSString;

@interface CHDAxis : NSObject <EDKeyedObject> {

	BOOL mReverseOrder;
	BOOL mSecondary;
	BOOL mDateTimeFormattingFlag;
	BOOL mLineVisible;
	BOOL mDeleted;
	BOOL mAutoMinimumValue;
	BOOL mAutoMaximumValue;
	BOOL mAutoCrossValue;
	BOOL mContentFormatDerived;
	int mAxisId;
	unsigned long long mContentFormatId;
	unsigned long long mFontIndex;
	double mScalingMaximum;
	double mScalingMinimum;
	int mOrientation;
	double mCrossAxisId;
	double mCrossesAt;
	int mMajorTickMark;
	int mMinorTickMark;
	int mAxisPosition;
	int mAxisType;
	int mTickLabelPosition;
	CHDTitle* mTitle;
	OADGraphicProperties* mMinorGridLinesGraphicProperties;
	OADGraphicProperties* mMajorGridLinesGraphicProperties;
	OADGraphicProperties* mAxisGraphicProperties;
	int mCrossBetween;
	int mCrosses;
	double mTickLabelRotation;
	BOOL mIsAutoRotation;
	unsigned long long mTickLabelColorIndex;
	EDResources* mResources;
	NSArray* mLabelEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDeleted:(BOOL)arg1 ;
-(long long)key;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(NSString *)description;
-(id)title;
-(int)orientation;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setOrientation:(int)arg1 ;
-(BOOL)isDeleted;
-(unsigned long long)contentFormatId;
-(id)contentFormat;
-(int)axisPosition;
-(BOOL)isSecondary;
-(id)majorGridLinesGraphicProperties;
-(BOOL)isAutoMinimumValue;
-(double)scalingMinimum;
-(BOOL)isAutoMaximumValue;
-(double)scalingMaximum;
-(BOOL)isDateTimeFormattingFlag;
-(void)setSecondary:(BOOL)arg1 ;
-(void)setAxisId:(int)arg1 ;
-(void)setAxisType:(int)arg1 ;
-(void)setAxisPosition:(int)arg1 ;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(void)setLineVisible:(BOOL)arg1 ;
-(void)setAxisGraphicProperties:(id)arg1 ;
-(void)setMajorTickMark:(int)arg1 ;
-(void)setMinorTickMark:(int)arg1 ;
-(void)setTickLabelPosition:(int)arg1 ;
-(void)setTickLabelAutoRotation:(BOOL)arg1 ;
-(void)setTickLabelColorIndex:(unsigned long long)arg1 ;
-(void)setTickLabelRotationAngle:(double)arg1 ;
-(void)setMinorGridLinesGraphicProperties:(id)arg1 ;
-(void)setMajorGridLinesGraphicProperties:(id)arg1 ;
-(void)setLabelEffects:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setReverseOrder:(BOOL)arg1 ;
-(void)setCrossesAt:(double)arg1 ;
-(void)setCrossBetween:(int)arg1 ;
-(void)setScalingMaximum:(double)arg1 ;
-(void)setScalingMinimum:(double)arg1 ;
-(BOOL)isReverseOrder;
-(double)crossesAt;
-(int)crossBetween;
-(unsigned long long)fontIndex;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg1 ;
-(BOOL)isAutoCrossValue;
-(void)adjustAxisPositionForHorizontalChart;
-(int)axisId;
-(int)axisIdForXml;
-(BOOL)isLineVisible;
-(BOOL)isHorizontalPosition;
-(id)defaultDateTimeContentFormat;
-(void)setContentFormat:(id)arg1 ;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(double)crossAxisId;
-(double)crossAxisIdForXml;
-(void)setCrossAxisId:(double)arg1 ;
-(int)majorTickMark;
-(int)minorTickMark;
-(int)axisType;
-(int)tickLabelPosition;
-(BOOL)isTickLabelVisible;
-(id)minorGridLinesGraphicProperties;
-(id)axisGraphicProperties;
-(int)crosses;
-(void)setCrosses:(int)arg1 ;
-(BOOL)isDate;
-(void)setDateTimeFormattingFlag:(BOOL)arg1 ;
-(double)tickLabelRotationAngle;
-(BOOL)isTickLabelAutoRotation;
-(id)labelEffects;
-(unsigned long long)tickLabelColorIndex;
-(id)tickLabelColor;
@end

