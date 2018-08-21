/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID;

@interface VCNetworkAgent : NSObject <NWNetworkAgent> {

	int _assertionRefCount;
	BOOL active;
	BOOL kernelActivated;
	BOOL userActivated;
	BOOL voluntary;
	BOOL specificUseOnly;
	NSString* agentDescription;
	NSUUID* agentUUID;

}

@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
+(id)sharedInstance;
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)addAssertion;
-(void)removeAssertion;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(BOOL)isKernelActivated;
-(void)setKernelActivated:(BOOL)arg1 ;
-(BOOL)isUserActivated;
-(void)setUserActivated:(BOOL)arg1 ;
-(BOOL)isVoluntary;
-(void)setVoluntary:(BOOL)arg1 ;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1 ;
@end
