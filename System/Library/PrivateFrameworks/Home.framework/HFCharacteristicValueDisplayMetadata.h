/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HFCharacteristicValueDisplayError, HFServiceState;

@interface HFCharacteristicValueDisplayMetadata : NSObject {

	long long _primaryState;
	long long _priority;
	NSString* _sortKey;
	long long _transitioningPrimaryState;
	HFCharacteristicValueDisplayError* _error;
	HFServiceState* _serviceState;

}

@property (assign,nonatomic) long long primaryState;                                 //@synthesize primaryState=_primaryState - In the implementation block
@property (assign,nonatomic) long long transitioningPrimaryState;                    //@synthesize transitioningPrimaryState=_transitioningPrimaryState - In the implementation block
@property (assign,nonatomic) long long priority;                                     //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSString * sortKey;                                       //@synthesize sortKey=_sortKey - In the implementation block
@property (nonatomic,retain) HFCharacteristicValueDisplayError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) HFServiceState * serviceState;                          //@synthesize serviceState=_serviceState - In the implementation block
+(long long)_unknownStatePriorityForServiceType:(id)arg1 ;
+(id)_errorForSymptomHandler:(id)arg1 isFixingCurrently:(BOOL)arg2 withContextProvider:(id)arg3 ;
+(id)displayMetadataForServiceDescriptor:(id)arg1 characteristicReadResponse:(id)arg2 ;
+(id)displayMetadataForAccessory:(id)arg1 withContextProvider:(id)arg2 ;
+(id)displayMetadataForMediaProfile:(id)arg1 withContextProvider:(id)arg2 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(NSString *)sortKey;
-(void)setSortKey:(NSString *)arg1 ;
-(void)setError:(HFCharacteristicValueDisplayError *)arg1 ;
-(HFCharacteristicValueDisplayError *)error;
-(void)setServiceState:(HFServiceState *)arg1 ;
-(void)setTransitioningPrimaryState:(long long)arg1 ;
-(void)parseWarningSensorWithServiceType:(id)arg1 response:(id)arg2 ;
-(void)parseInformationalSensorWithServiceType:(id)arg1 response:(id)arg2 ;
-(void)parsePowerStateForServiceType:(id)arg1 response:(id)arg2 ;
-(void)parseActiveStateForServiceType:(id)arg1 response:(id)arg2 ;
-(void)parseCurrentTargetPositionForServiceType:(id)arg1 response:(id)arg2 ;
-(void)parseGarageDoorOpenerResponse:(id)arg1 ;
-(void)parseLockMechanismResponse:(id)arg1 ;
-(void)parseSecuritySystemResponse:(id)arg1 ;
-(void)parseThermostatResponse:(id)arg1 serviceType:(id)arg2 ;
-(void)parseAirPurifierResponse:(id)arg1 ;
-(void)parseHumidifierDehumidifierResponse:(id)arg1 ;
-(void)parseProgammableSwitchOfType:(id)arg1 response:(id)arg2 ;
-(long long)transitioningPrimaryState;
-(HFServiceState *)serviceState;
-(long long)primaryState;
-(void)setPrimaryState:(long long)arg1 ;
@end

