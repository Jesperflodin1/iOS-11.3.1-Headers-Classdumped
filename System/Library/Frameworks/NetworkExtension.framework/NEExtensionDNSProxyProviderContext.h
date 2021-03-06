/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEExtensionAppProxyProviderContext.h>
#import <libobjc.A.dylib/NEExtensionDNSProxyProviderProtocol.h>

@class NSString;

@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext <NEExtensionDNSProxyProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(BOOL)arg2 ;
-(void)setSystemDNSSettings:(id)arg1 ;
@end

