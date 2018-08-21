/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEVPNManager.h>

@interface NETunnelProviderManager : NEVPNManager

@property (readonly) long long routingMethod; 
+(void)loadAllFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithSessionType:(int)arg1 ;
-(BOOL)isProtocolTypeValid:(long long)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)copyAppRules;
-(long long)routingMethod;
@end

