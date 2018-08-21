/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXHost.h>

@class NSExtensionContext, NSString;

@interface SXHostExtension : NSObject <SXHost> {

	BOOL _isActive;
	NSExtensionContext* _extensionContext;

}

@property (assign,nonatomic,__weak) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                             //@synthesize isActive=_isActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL active; 
-(BOOL)isActive;
-(NSExtensionContext *)extensionContext;
-(BOOL)canOpenURL:(id)arg1 ;
-(BOOL)active;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)extensionHostDidBecomeActive:(id)arg1 ;
-(void)extensionHostDidEnterBackground:(id)arg1 ;
-(void)extensionHostWillEnterForeground:(id)arg1 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithExtensionContext:(id)arg1 ;
@end

