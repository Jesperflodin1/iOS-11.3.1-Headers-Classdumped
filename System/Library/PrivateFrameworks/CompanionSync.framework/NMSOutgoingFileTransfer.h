/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSDeviceTargetable.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NSSet, NSURL, NSDictionary, NSString, NMSMessageCenter;

@interface NMSOutgoingFileTransfer : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding> {

	NSSet* targetDeviceIDs;
	NSURL* _fileURL;
	NSDictionary* _metadata;
	id _pbHeaderInfo;
	NSString* _idsIdentifier;
	unsigned long long _priority;
	double _sendTimeout;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NMSMessageCenter* _messageCenter;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id pbHeaderInfo;                                      //@synthesize pbHeaderInfo=_pbHeaderInfo - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                   //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                    //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                       //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (nonatomic,copy) NSSet * targetDeviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)description;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(NSURL *)fileURL;
-(NSDictionary *)metadata;
-(id)CPObfuscatedDescriptionObject;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(void)setPbHeaderInfo:(id)arg1 ;
-(void)setTargetDeviceIDs:(NSSet *)arg1 ;
-(NSDictionary *)extraIDSOptions;
-(NSSet *)targetDeviceIDs;
-(id)pbHeaderInfo;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)idsIdentifier;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
@end

