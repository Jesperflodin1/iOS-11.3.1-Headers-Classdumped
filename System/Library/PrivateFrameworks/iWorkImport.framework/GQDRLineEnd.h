/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDBezierPath, NSString;

@interface GQDRLineEnd : NSObject <GQDNameMappable> {

	GQDBezierPath* mPath;
	CGPoint mEndPoint;
	BOOL mIsFilled;
	double mScale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(char*)pathStr;
-(double)scale;
-(void)dealloc;
-(CGPathRef)path;
-(CGPoint)endPoint;
-(BOOL)isFilled;
@end

