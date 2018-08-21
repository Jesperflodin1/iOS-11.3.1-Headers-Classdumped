/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class IDSDevice, NSData, NSString, NSDictionary, HDIDSMessageCenter;

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription> {

	BOOL _doNotCompress;
	BOOL _queueOnly1;
	BOOL _forceLocalDelivery;
	unsigned short _messageID;
	IDSDevice* _toDevice;
	NSData* _data;
	NSString* _idsIdentifier;
	unsigned long long _priority;
	double _sendTimeout;
	double _responseTimeout;
	NSDictionary* _persistentUserInfo;
	HDIDSMessageCenter* _messageCenter;
	id _pbRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbRequest;                                           //@synthesize pbRequest=_pbRequest - In the implementation block
@property (nonatomic,readonly) unsigned short messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,readonly) IDSDevice * toDevice;                                 //@synthesize toDevice=_toDevice - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                     //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (assign,nonatomic) double responseTimeout;                                 //@synthesize responseTimeout=_responseTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                      //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (assign,nonatomic) BOOL doNotCompress;                                     //@synthesize doNotCompress=_doNotCompress - In the implementation block
@property (assign,nonatomic) BOOL queueOnly1;                                        //@synthesize queueOnly1=_queueOnly1 - In the implementation block
@property (assign,nonatomic) BOOL forceLocalDelivery;                                //@synthesize forceLocalDelivery=_forceLocalDelivery - In the implementation block
+(id)activationRequestWithRestore:(id)arg1 syncStore:(id)arg2 ;
+(id)changeRequestWithChangeSet:(id)arg1 status:(id)arg2 syncStore:(id)arg3 ;
+(id)speculativeChangeRequestWithChangeSet:(id)arg1 syncStore:(id)arg2 ;
+(id)_requestWithMessageID:(unsigned short)arg1 message:(id)arg2 syncStore:(id)arg3 ;
+(id)requestWithMessageID:(unsigned short)arg1 device:(id)arg2 ;
-(unsigned short)messageID;
-(id)init;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(IDSDevice *)toDevice;
-(id)nanoSyncDescription;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(void)setPbRequest:(id)arg1 ;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(BOOL)doNotCompress;
-(BOOL)forceLocalDelivery;
-(BOOL)queueOnly1;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(double)responseTimeout;
-(void)setSendTimeout:(double)arg1 ;
-(void)setResponseTimeout:(double)arg1 ;
-(void)setDoNotCompress:(BOOL)arg1 ;
-(void)setQueueOnly1:(BOOL)arg1 ;
-(void)setForceLocalDelivery:(BOOL)arg1 ;
@end

