/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIStatusBarServerClient;
#import <UIKit/UIKit-Structs.h>
@interface UIStatusBarServer : NSObject {

	id<UIStatusBarServerClient> _statusBar;
	CFRunLoopSourceRef _source;

}

@property (nonatomic,retain) id<UIStatusBarServerClient> statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
+(void)runServer;
+(void)addStyleOverrides:(int)arg1 ;
+(void)removeStyleOverrides:(int)arg1 ;
+(void)postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
+(void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2 ;
+(void)addStatusBarItem:(int)arg1 ;
+(void)removeStatusBarItem:(int)arg1 ;
+(const SCD_Struct_UI61*)getStatusBarData;
+(BOOL)getGlowAnimationStateForStyle:(long long)arg1 ;
+(id)getDoubleHeightStatusStringForStyle:(long long)arg1 ;
+(double)getGlowAnimationEndTimeForStyle:(long long)arg1 ;
+(const char*)serviceName;
+(unsigned)_serverPort;
+(unsigned)_publisherPort;
+(void)postStatusBarData:(const SCD_Struct_UI61*)arg1 withActions:(int)arg2 ;
+(void)postStatusBarOverrideData:(SCD_Struct_UI62*)arg1 ;
+(void)permanentizeStatusBarOverrideData;
+(SCD_Struct_UI62*)getStatusBarOverrideData;
+(int)getStyleOverrides;
-(void)dealloc;
-(id<UIStatusBarServerClient>)statusBar;
-(void)setStatusBar:(id<UIStatusBarServerClient>)arg1 ;
-(id)initWithStatusBar:(id)arg1 ;
-(void)_receivedStatusBarData:(SCD_Struct_UI61*)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)_receivedStyleOverrides:(int)arg1 ;
-(void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
-(void)_receivedDoubleHeightStatus:(const char*)arg1 forStyle:(long long)arg2 ;
@end

