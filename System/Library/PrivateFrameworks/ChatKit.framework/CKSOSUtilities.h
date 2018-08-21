/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSOSUtilities : NSObject

@property (getter=isMMSEnabled,nonatomic,readonly) BOOL MMSEnabled; 
+(BOOL)isMMSEnabled;
+(id)sharedUtilities;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(BOOL)isMMSEnabled;
-(void)sendMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(void)_sendMessageAndObserveNotification:(id)arg1 ;
-(id)_sendMessageAndReturnGUIDs:(id)arg1 ;
-(id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(BOOL)arg3 ;
@end

