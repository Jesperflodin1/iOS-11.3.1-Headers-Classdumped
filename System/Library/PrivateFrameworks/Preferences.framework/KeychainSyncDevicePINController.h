/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController : PSKeychainSyncTextEntryController {

	DevicePINController* _devicePINController;
	BOOL _showingBlockedMessage;
	NSString* _enterPasscodeTitle;
	NSString* _enterPasscodeReason;
	UIKeyboard* _disabledKeyboard;

}

@property (nonatomic,retain) UIKeyboard * disabledKeyboard;               //@synthesize disabledKeyboard=_disabledKeyboard - In the implementation block
@property (nonatomic,retain) NSString * enterPasscodeTitle;               //@synthesize enterPasscodeTitle=_enterPasscodeTitle - In the implementation block
@property (nonatomic,retain) NSString * enterPasscodeReason;              //@synthesize enterPasscodeReason=_enterPasscodeReason - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)setEnterPasscodeTitle:(NSString *)arg1 ;
-(void)setEnterPasscodeReason:(NSString *)arg1 ;
-(void)updateBlockedState:(id)arg1 ;
-(void)setDisabledKeyboard:(UIKeyboard *)arg1 ;
-(NSString *)enterPasscodeTitle;
-(NSString *)enterPasscodeReason;
-(UIKeyboard *)disabledKeyboard;
-(id)specifiers;
@end
