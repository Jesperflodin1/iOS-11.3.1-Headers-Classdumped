/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@class PETScalarEventTracker;

@interface PPMTopicsScored : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 resultSizeLog10:(unsigned long long)arg3 limitHit:(PPMTypeSafeBool_)arg4 timeSpec:(PPMTypeSafeBool_)arg5 timeLimited:(PPMTypeSafeBool_)arg6 exclusionSpec:(PPMTypeSafeBool_)arg7 error:(PPMTypeSafeBool_)arg8 ;
-(PETScalarEventTracker *)tracker;
@end

