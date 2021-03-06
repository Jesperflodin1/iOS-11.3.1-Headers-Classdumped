/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ATXDataStore, _ATXInternalUninstallNotification, NSString;

@interface _ATXFeedback : NSObject {

	_ATXDataStore* _store;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	double _decayHalfLifeSeconds;
	double _baseAlpha;
	double _baseBeta;
	double _priorMean;
	double _priorAlpha;
	double _priorBeta;
	NSString* _abGroupIdentifier;

}

@property (nonatomic,readonly) double baseAlpha; 
@property (nonatomic,readonly) double baseBeta; 
@property (nonatomic,readonly) double currentAlpha; 
@property (nonatomic,readonly) double currentBeta; 
@property (nonatomic,readonly) NSString * abGroupIdentifier;              //@synthesize abGroupIdentifier=_abGroupIdentifier - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)initWithDataStore:(id)arg1 ;
-(void)decayCounts;
-(void)resetData;
-(double)baseBeta;
-(double)currentAlpha;
-(double)currentBeta;
-(void)doDecayAtTime:(double)arg1 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(BOOL)arg3 ;
-(void)putNopScoresForApps:(id)arg1 into:(double*)arg2 atTime:(double)arg3 ;
-(void)putFeedbackScoresForApps:(id)arg1 intoScores:(double*)arg2 confirms:(double*)arg3 rejects:(double*)arg4 ;
-(void)removeFeedbackForBundles:(id)arg1 ;
-(void)removeFeedbackForBundle:(id)arg1 ;
-(NSString *)abGroupIdentifier;
-(double)baseAlpha;
@end

