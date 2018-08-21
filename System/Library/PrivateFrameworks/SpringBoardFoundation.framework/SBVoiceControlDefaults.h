/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBVoiceControlDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL disableVoiceControlForBluetoothRequests; 
@property (nonatomic,readonly) BOOL disableHandlerActions; 
@property (getter=isVoiceControlLoggingEnabled,nonatomic,readonly) BOOL voiceControlLoggingEnabled; 
-(void)setDisableVoiceControlForBluetoothRequests:(BOOL)arg1 ;
-(BOOL)disableVoiceControlForBluetoothRequests;
-(void)setDisableHandlerActions:(BOOL)arg1 ;
-(BOOL)disableHandlerActions;
-(void)setVoiceControlLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isVoiceControlLoggingEnabled;
-(void)_bindAndRegisterDefaults;
@end
