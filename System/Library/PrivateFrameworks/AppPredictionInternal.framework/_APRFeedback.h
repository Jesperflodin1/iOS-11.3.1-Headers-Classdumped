/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _APRFeedback : NSObject {

	double _decayHalfLifeSeconds;

}
+(id)sharedInstance;
-(id)init;
-(void)decayCounts;
-(void)intentType:(id)arg1 experience:(unsigned long long)arg2 feedbackSource:(unsigned long long)arg3 engagementType:(unsigned long long)arg4 launchedBundleId:(id)arg5 predictedBundleIds:(id)arg6 ;
-(void)resetData;
@end
