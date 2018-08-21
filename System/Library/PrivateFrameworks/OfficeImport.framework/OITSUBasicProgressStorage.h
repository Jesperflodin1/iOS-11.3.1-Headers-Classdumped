/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OITSUBasicProgressStorage : NSObject {

	double mValue;
	double mMaxValue;
	BOOL mIndeterminate;

}

@property (assign) double value; 
@property (assign) double maxValue; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(void)setValue:(double)arg1 ;
-(double)value;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
@end

