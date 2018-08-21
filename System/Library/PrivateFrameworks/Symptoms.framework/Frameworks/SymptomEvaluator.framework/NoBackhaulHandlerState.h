/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/ExpertSystemStateCore.h>

@class AWDSymptomsAdvisoryAlternateNetworkType;

@interface NoBackhaulHandlerState : ExpertSystemStateCore {

	AWDSymptomsAdvisoryAlternateNetworkType* _awdMetric;

}

@property (retain) AWDSymptomsAdvisoryAlternateNetworkType * awdMetric;              //@synthesize awdMetric=_awdMetric - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
+(id)createAndInitializeAWDMetricForStateWithLevel:(int)arg1 ;
-(AWDSymptomsAdvisoryAlternateNetworkType *)awdMetric;
-(void)setAwdMetric:(AWDSymptomsAdvisoryAlternateNetworkType *)arg1 ;
@end

