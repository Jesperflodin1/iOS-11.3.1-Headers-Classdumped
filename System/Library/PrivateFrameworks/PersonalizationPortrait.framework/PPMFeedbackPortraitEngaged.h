/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
@class PETScalarEventTracker;

@interface PPMFeedbackPortraitEngaged : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 variantId:(id)arg3 type:(PPMPortraitFeedbackType_)arg4 domain:(PPMPortraitDomain_)arg5 numElementsLog2:(unsigned long long)arg6 ;
-(PETScalarEventTracker *)tracker;
@end

