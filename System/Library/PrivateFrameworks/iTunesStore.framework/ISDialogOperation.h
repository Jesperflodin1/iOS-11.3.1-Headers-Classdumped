/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSArray;

@interface ISDialogOperation : ISOperation {

	ISDialog* _dialog;
	BOOL _performDefaultActions;
	ISDialogButton* _selectedButton;
	NSArray* _textFieldValues;
	id _userNotification;

}

@property (retain) id userNotification;                                 //@synthesize userNotification=_userNotification - In the implementation block
@property (assign) id<ISDialogOperationDelegate> delegate; 
@property (retain) ISDialog * dialog;                                   //@synthesize dialog=_dialog - In the implementation block
@property (assign) BOOL performDefaultActions;                          //@synthesize performDefaultActions=_performDefaultActions - In the implementation block
@property (retain) ISDialogButton * selectedButton;                     //@synthesize selectedButton=_selectedButton - In the implementation block
@property (readonly) NSArray * textFieldValues; 
+(id)operationWithDialog:(id)arg1 ;
+(id)operationWithError:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)_run;
-(void)run;
-(ISDialogButton *)selectedButton;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(BOOL)performDefaultActions;
-(void)setSelectedButton:(ISDialogButton *)arg1 ;
-(void)_showUserNotification:(id)arg1 ;
-(void)_waitForUserNotificationResponse:(CFUserNotificationRef)arg1 ;
-(void)_handleResponseForNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
-(void)setPerformDefaultActions:(BOOL)arg1 ;
-(void)setUserNotification:(id)arg1 ;
-(id)userNotification;
-(NSArray *)textFieldValues;
-(ISDialog *)dialog;
-(void)setDialog:(ISDialog *)arg1 ;
@end

