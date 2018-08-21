/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, BBAppearance;

@interface BBAction : NSObject <NSCopying, NSSecureCoding> {

	/*^block*/id _internalBlock;
	BOOL _deliverResponse;
	NSURL* _launchURL;
	NSString* _launchBundleID;
	BOOL _launchCanBypassPinLock;
	BOOL _authenticationRequired;
	BOOL _shouldDismissBulletin;
	NSString* _activatePluginName;
	NSDictionary* _activatePluginContext;
	long long _actionType;
	NSString* _identifier;
	BBAppearance* _appearance;
	unsigned long long _activationMode;
	NSString* _remoteViewControllerClassName;
	NSString* _remoteServiceBundleIdentifier;
	long long _behavior;
	NSDictionary* _behaviorParameters;

}

@property (nonatomic,copy) id internalBlock;                                                           //@synthesize internalBlock=_internalBlock - In the implementation block
@property (assign,nonatomic) long long actionType;                                                     //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) BBAppearance * appearance;                                                  //@synthesize appearance=_appearance - In the implementation block
@property (assign,getter=isAuthenticationRequired,nonatomic) BOOL authenticationRequired;              //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissBulletin;                                               //@synthesize shouldDismissBulletin=_shouldDismissBulletin - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                                                          //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * launchBundleID;                                                  //@synthesize launchBundleID=_launchBundleID - In the implementation block
@property (assign,nonatomic) BOOL launchCanBypassPinLock;                                              //@synthesize launchCanBypassPinLock=_launchCanBypassPinLock - In the implementation block
@property (assign,nonatomic) unsigned long long activationMode;                                        //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSString * activatePluginName;                                              //@synthesize activatePluginName=_activatePluginName - In the implementation block
@property (nonatomic,copy) NSDictionary * activatePluginContext;                                       //@synthesize activatePluginContext=_activatePluginContext - In the implementation block
@property (nonatomic,copy) NSString * remoteViewControllerClassName;                                   //@synthesize remoteViewControllerClassName=_remoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * remoteServiceBundleIdentifier;                                   //@synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier - In the implementation block
@property (assign,nonatomic) long long behavior;                                                       //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSDictionary * behaviorParameters;                                          //@synthesize behaviorParameters=_behaviorParameters - In the implementation block
@property (assign,nonatomic) BOOL canBypassPinLock; 
+(id)action;
+(BOOL)supportsSecureCoding;
+(id)actionWithLaunchURL:(id)arg1 callblock:(/*^block*/id)arg2 ;
+(id)actionWithLaunchBundleID:(id)arg1 callblock:(/*^block*/id)arg2 ;
+(id)actionWithCallblock:(/*^block*/id)arg1 ;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 ;
+(id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2 ;
+(id)actionWithAppearance:(id)arg1 ;
+(id)actionWithIdentifier:(id)arg1 ;
+(id)actionWithLaunchURL:(id)arg1 ;
+(id)actionWithLaunchBundleID:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)url;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BBAppearance *)appearance;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isAuthenticationRequired;
-(unsigned long long)activationMode;
-(long long)behavior;
-(void)setBehavior:(long long)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(id)bundleID;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setCallblock:(/*^block*/id)arg1 ;
-(void)setActivatePluginName:(NSString *)arg1 ;
-(void)setActivatePluginContext:(NSDictionary *)arg1 ;
-(void)setInternalBlock:(id)arg1 ;
-(NSString *)activatePluginName;
-(NSString *)remoteServiceBundleIdentifier;
-(NSString *)remoteViewControllerClassName;
-(BOOL)hasRemoteViewAction;
-(BOOL)launchCanBypassPinLock;
-(void)setLaunchCanBypassPinLock:(BOOL)arg1 ;
-(id)internalBlock;
-(BOOL)canBypassPinLock;
-(NSDictionary *)activatePluginContext;
-(id)_nameForActionType:(long long)arg1 ;
-(void)setCanBypassPinLock:(BOOL)arg1 ;
-(void)setRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(id)partialDescription;
-(BOOL)hasLaunchAction;
-(BOOL)hasPluginAction;
-(BOOL)hasInteractiveAction;
-(BOOL)deliverResponse:(id)arg1 ;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(void)setShouldDismissBulletin:(BOOL)arg1 ;
-(void)setAppearance:(BBAppearance *)arg1 ;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(BOOL)shouldDismissBulletin;
-(NSString *)launchBundleID;
-(void)setLaunchBundleID:(NSString *)arg1 ;
-(NSDictionary *)behaviorParameters;
-(void)setBehaviorParameters:(NSDictionary *)arg1 ;
@end

