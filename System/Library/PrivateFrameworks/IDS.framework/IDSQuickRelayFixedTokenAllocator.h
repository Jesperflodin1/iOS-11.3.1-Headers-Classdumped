/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSNumber;

@interface IDSQuickRelayFixedTokenAllocator : NSObject {

	NSData* _relayIP;
	NSNumber* _relayPort;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	NSData* _relaySessionID;
	NSNumber* _relayCombinedSoftwareID;
	NSData* _appleID;

}

@property (copy) NSData * relayIP;                                //@synthesize relayIP=_relayIP - In the implementation block
@property (copy) NSNumber * relayPort;                            //@synthesize relayPort=_relayPort - In the implementation block
@property (copy) NSData * relaySessionToken;                      //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (copy) NSData * relaySessionKey;                        //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (copy) NSData * relaySessionID;                         //@synthesize relaySessionID=_relaySessionID - In the implementation block
@property (copy) NSNumber * relayCombinedSoftwareID;              //@synthesize relayCombinedSoftwareID=_relayCombinedSoftwareID - In the implementation block
@property (copy) NSData * appleID;                                //@synthesize appleID=_appleID - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)setRelaySessionToken:(NSData *)arg1 ;
-(void)setRelaySessionKey:(NSData *)arg1 ;
-(BOOL)_isSessionInfoValid:(id)arg1 ;
-(void)_setAllValuesFromDictionary:(id)arg1 ;
-(id)_parseQuickRelayDefaults;
-(void)setRelayIP:(NSData *)arg1 ;
-(void)setRelayPort:(NSNumber *)arg1 ;
-(void)setRelaySessionID:(NSData *)arg1 ;
-(void)setRelayCombinedSoftwareID:(NSNumber *)arg1 ;
-(NSData *)relayIP;
-(NSNumber *)relayPort;
-(NSData *)relaySessionID;
-(NSNumber *)relayCombinedSoftwareID;
-(void)setAppleID:(NSData *)arg1 ;
-(NSData *)appleID;
-(NSData *)relaySessionToken;
-(NSData *)relaySessionKey;
-(id)initWithDefaults;
@end

