/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLLogRegTrackerProtocol.h>
#import <libobjc.A.dylib/PMLEvaluationTrackerProtocol.h>

@class NSString;

@interface PMLPassThroughTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol> {

	NSString* _planId;
	unsigned long long _quantizationNumberOfBuckets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 ;
-(id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 ;
-(id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2 ;
-(id)initWithPlanId:(NSString*)arg1 numberOfBuckets:(unsigned long long)arg2 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
@end

