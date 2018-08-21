/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSServiceDelegate.h>

@class NSMapTable, NSMutableDictionary, NSNumber, NSString;

@interface IDSSignInController : NSObject <IDSServiceDelegate> {

	NSMapTable* _serviceCallbackMap;
	NSMutableDictionary* _nameServiceMap;
	NSNumber* _faceTimePreviousEnabled;

}

@property (nonatomic,retain) NSMapTable * serviceCallbackMap;                   //@synthesize serviceCallbackMap=_serviceCallbackMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nameServiceMap;              //@synthesize nameServiceMap=_nameServiceMap - In the implementation block
@property (nonatomic,retain) NSNumber * faceTimePreviousEnabled;                //@synthesize faceTimePreviousEnabled=_faceTimePreviousEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isiMessageEnabled;
-(id)_serviceForName:(id)arg1 ;
-(NSMapTable *)serviceCallbackMap;
-(NSMutableDictionary *)nameServiceMap;
-(BOOL)isServiceCurrentlyEnabled:(id)arg1 ;
-(void)registerEnabledStatusChangedCallback:(/*^block*/id)arg1 forService:(id)arg2 ;
-(void)unregisterEnabledStatusChangedCallbackForService:(id)arg1 ;
-(void)setServiceCallbackMap:(NSMapTable *)arg1 ;
-(void)setNameServiceMap:(NSMutableDictionary *)arg1 ;
-(NSNumber *)faceTimePreviousEnabled;
-(void)setFaceTimePreviousEnabled:(NSNumber *)arg1 ;
-(void)enableiMessage;
-(void)disableiMessage;
-(void)registeriMessageEnabledStatusChangedCallback:(/*^block*/id)arg1 ;
-(void)unregisteriMessageEnabledStatusChangedCallback;
-(BOOL)isFaceTimeEnabled;
-(void)enableFaceTime;
-(void)disableFaceTime;
-(void)registerFaceTimeEnabledStatusChangedCallback:(/*^block*/id)arg1 ;
-(void)unregisterFaceTimeEnabledStatusChangedCallback;
-(void)disableService:(id)arg1 ;
-(void)enableService:(id)arg1 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
@end
