/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, HAPAccessory, HMDAccessory, NSUUID, NSString;

@interface HMDCharacteristicReadWriteLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _isWriteOperation;
	BOOL _isTimedWrite;
	BOOL _isLocal;
	NSArray* _characteristicsToRead;
	HAPAccessory* _hapAccessory;
	HMDAccessory* _hmdAccessory;
	NSUUID* _transactionId;
	unsigned long long _triggerSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * characteristicsToRead;                 //@synthesize characteristicsToRead=_characteristicsToRead - In the implementation block
@property (nonatomic,__weak,readonly) HAPAccessory * hapAccessory;              //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * hmdAccessory;              //@synthesize hmdAccessory=_hmdAccessory - In the implementation block
@property (nonatomic,readonly) BOOL isWriteOperation;                           //@synthesize isWriteOperation=_isWriteOperation - In the implementation block
@property (nonatomic,readonly) BOOL isTimedWrite;                               //@synthesize isTimedWrite=_isTimedWrite - In the implementation block
@property (nonatomic,readonly) BOOL isLocal;                                    //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) NSUUID * transactionId;                          //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) unsigned long long triggerSource;                //@synthesize triggerSource=_triggerSource - In the implementation block
+(id)uuid;
+(id)characteristicWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isTimedWrite:(BOOL)arg5 isLocal:(BOOL)arg6 transactionId:(id)arg7 ;
+(id)characteristicReadLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isLocal:(BOOL)arg5 transactionId:(id)arg6 ;
-(BOOL)isLocal;
-(HMDAccessory *)hmdAccessory;
-(id)initReadWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isWriteOperation:(BOOL)arg5 isTimedWrite:(BOOL)arg6 isLocal:(BOOL)arg7 transactionId:(id)arg8 ;
-(BOOL)isTimedWrite;
-(HAPAccessory *)hapAccessory;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(unsigned long long)triggerSource;
-(NSUUID *)transactionId;
-(BOOL)isWriteOperation;
-(NSArray *)characteristicsToRead;
@end

