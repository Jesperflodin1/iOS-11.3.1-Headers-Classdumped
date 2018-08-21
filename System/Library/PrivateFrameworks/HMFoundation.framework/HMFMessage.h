/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFMessageInternal, NSUUID, HMFMessageDestination, NSDictionary, NSString, HMFMessageTransport;

@interface HMFMessage : HMFObject <NSCopying, NSMutableCopying> {

	HMFMessageInternal* _internal;

}

@property (nonatomic,readonly) HMFMessageInternal * internal;                       //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,retain) HMFMessageDestination * destination; 
@property (nonatomic,copy) NSDictionary * messagePayload; 
@property (nonatomic,copy) id responseHandler; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long qualityOfService; 
@property (nonatomic,__weak,readonly) HMFMessageTransport * transport; 
@property (nonatomic,copy,readonly) NSDictionary * userInfo; 
@property (nonatomic,copy,readonly) NSDictionary * headers; 
+(id)shortDescription;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)messageWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
+(id)messageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(NSUUID *)identifier;
-(NSDictionary *)userInfo;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(HMFMessageDestination *)destination;
-(void)setDestination:(HMFMessageDestination *)arg1 ;
-(id)shortDescription;
-(id)dictionaryForKey:(id)arg1 ;
-(id)initWithInternalMessage:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)__initWithInternalMessage:(id)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)calendarForKey:(id)arg1 ;
-(id)locationForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(long long)qualityOfService;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(HMFMessageInternal *)internal;
-(NSDictionary *)messagePayload;
-(id)uuidForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2 ;
-(id)predicateForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 ;
-(HMFMessageTransport *)transport;
-(id)arrayOfDateComponentsForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
-(void)setMessagePayload:(NSDictionary *)arg1 ;
-(id)errorForKey:(id)arg1 ;
-(id)timeZoneForKey:(id)arg1 ;
-(id)dateComponentsForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6 ;
-(id)nullForKey:(id)arg1 ;
-(NSDictionary *)headers;
-(id)dataForKey:(id)arg1 ;
@end

