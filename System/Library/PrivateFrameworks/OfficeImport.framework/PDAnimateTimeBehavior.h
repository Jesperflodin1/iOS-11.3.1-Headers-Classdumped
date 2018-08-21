/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {

	NSString* mTo;
	NSString* mFrom;
	NSString* mBy;
	BOOL mHasCalcMode;
	int mCalcMode;
	BOOL mHasValueType;
	int mValueType;

}
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(int)valueType;
-(id)from;
-(id)to;
-(id)init;
-(void)dealloc;
-(void)setValueType:(int)arg1 ;
-(id)by;
-(void)setBy:(id)arg1 ;
-(BOOL)hasCalcMode;
-(int)calcMode;
-(void)setCalcMode:(int)arg1 ;
-(BOOL)hasValueType;
@end

