/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSMutableSet;

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep {

	NSMutableSet* _alreadySeenMasterIdentifiers;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) unsigned long long maximumCount;              //@synthesize maximumCount=_maximumCount - In the implementation block
-(void)reset;
-(id)shortDescription;
-(id)initWithStorage:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
-(unsigned long long)maximumCount;
@end

