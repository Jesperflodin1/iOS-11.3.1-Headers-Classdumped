/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@class NSString;

@interface MTLanguageChangeListener : NSObject <MTAgentNotificationListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_languageChangeNotification;
-(void)handleNotification:(id)arg1 ;
-(id)handledLiveDarwinNotifications;
-(void)_handleLanguageChanged;
-(BOOL)handlesNotification:(id)arg1 ;
@end

