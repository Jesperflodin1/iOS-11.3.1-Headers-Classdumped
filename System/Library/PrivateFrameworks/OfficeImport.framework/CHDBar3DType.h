/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDBar2DType.h>

@interface CHDBar3DType : CHDBar2DType {

	int mGapDepth;
	int mShapeType;

}
+(BOOL)is3DType;
+(id)stringWithShapeType:(int)arg1 ;
-(void)setShapeType:(int)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(void)setGapDepth:(int)arg1 ;
-(int)gapDepth;
-(int)shapeType;
@end

