/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKConversationListCell.h>

@class UIImageView, CKAvatarView;

@interface CKConversationListStandardCell : CKConversationListCell {

	UIImageView* _unreadIndicatorImageView;
	CKAvatarView* _avatarView;

}
+(id)identifierForConversation:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)avatarView;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(void)_updateAvatarView;
-(void)_calculateLayoutFrames;
-(id)chevronImageView;
@end
