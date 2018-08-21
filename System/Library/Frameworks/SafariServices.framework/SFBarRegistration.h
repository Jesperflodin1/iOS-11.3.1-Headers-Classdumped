/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIResponder.h>
#import <libobjc.A.dylib/_SFBarRegistrationToken.h>

@class UIView, _SFBarManager, UIBarButtonItem, NSString;

@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken> {

	UIView* _bar;
	_SFBarManager* _barManager;
	UIBarButtonItem* _backItem;
	UIBarButtonItem* _bookmarksItem;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _newTabItem;
	UIBarButtonItem* _shareItem;
	UIBarButtonItem* _tabExposeItem;
	UIBarButtonItem* _openInSafariItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)UIBarButtonItemForItem:(long long)arg1 ;
-(id)popoverSourceInfoForItem:(long long)arg1 ;
-(void)_itemReceivedTap:(id)arg1 ;
-(void)_itemReceivedLongPress:(id)arg1 ;
-(long long)_barItemForUIBarButtonItem:(id)arg1 ;
-(id)_UIBarButtonItemForBarItem:(long long)arg1 ;
-(id)initWithBar:(id)arg1 barManager:(id)arg2 layout:(long long)arg3 persona:(unsigned long long)arg4 ;
-(void)setBookmarksItemSelected:(BOOL)arg1 ;
-(void)setBarItem:(long long)arg1 enabled:(BOOL)arg2 ;
@end

