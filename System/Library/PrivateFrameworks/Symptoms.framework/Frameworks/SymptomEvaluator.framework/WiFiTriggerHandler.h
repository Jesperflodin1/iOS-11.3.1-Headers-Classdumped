/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SyndromeHandlerProtocol.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString, ManagedEventHandler, NSDate, DecisionDetails, NSArray;

@interface WiFiTriggerHandler : NSObject <ConfigurableObjectProtocol, SyndromeHandlerProtocol, ManagedEventInfoProtocol> {

	NSString* _syndromeName;
	char* _syndromeUTF8Name;
	ManagedEventHandler* _eventHandler;
	double _lastReportTime;
	NSString* _baseName;
	float _baseRTTAvg;
	float _baseRTTVar;
	float _baseRTTMin;
	float _newRTTAvg;
	float _newRTTVar;
	NSDate* _RTTTimestamp;
	id _wifiEpochObserver;
	id _cellEpochObserver;
	id _primaryInterfaceObserver;
	DecisionDetails* _detailsAwaitingRefuter;
	NSArray* _baselineDefaultRouteData;
	NSDate* _baselineDefaultRouteTimestamp;
	int _refuterAcitvationId;
	long long _lastRefutePeriodTraffic;
	double _lastRefutePeriodDuration;
	NSDate* _lastRefutePeriodTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
+(id)configureClass:(id)arg1 ;
+(void)_triggerAllowedByRSSI:(BOOL)arg1 receiptTimestamp:(id)arg2 ;
+(id)getHandlerByName:(id)arg1 ;
+(void)triggerAllowedByRSSI:(BOOL)arg1 receiptTimestamp:(id)arg2 ;
+(id)getNetScoreInfo;
-(id)init;
-(NSString *)description;
-(void)_reset;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)didReceiveSyndrome:(id)arg1 ;
-(long long)_getARPFailureCount;
-(long long)_getDataStallsScore;
-(long long)_getND6FailureCount;
-(id)_getARPInfo;
-(id)_getND6Info;
-(id)_getDNSInfo;
-(id)_getAWDInfo:(id)arg1 ;
-(int)combineScoreARP:(int)arg1 ND6:(int)arg2 DNS:(int)arg3 RTT:(int)arg4 flows:(int)arg5 ;
-(id)_getNetScoreInfo;
-(int)_impactFromFlags:(unsigned)arg1 andFlows:(unsigned long long)arg2 ;
-(BOOL)insufficientRxTrafficDetectedFrom:(id)arg1 atTime:(id)arg2 To:(id)arg3 ;
-(void)dampeningStage:(id)arg1 ;
-(void)refuteStage:(id)arg1 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
@end

