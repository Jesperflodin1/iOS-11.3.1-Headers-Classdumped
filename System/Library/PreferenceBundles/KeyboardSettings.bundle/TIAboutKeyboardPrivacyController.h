/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, PSSpecifier, PSListController, NSString;

@interface TIAboutKeyboardPrivacyController : NSObject <UITextViewDelegate> {

	UITextView* _infoTextView;
	BOOL _asHeader;
	PSSpecifier* _specifier;
	PSListController* _listController;

}

@property (assign,nonatomic) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic) BOOL asHeader;                                  //@synthesize asHeader=_asHeader - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(PSListController *)listController;
-(void)setListController:(PSListController *)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(id)initWithGroupSpecifier:(id)arg1 asHeader:(BOOL)arg2 inListController:(id)arg3 ;
-(void)addPrivacyLinkViewIfNecessaryToHeaderView:(id)arg1 forSection:(long long)arg2 ;
-(BOOL)asHeader;
-(void)aboutDonePressed;
-(void)setAsHeader:(BOOL)arg1 ;
@end
