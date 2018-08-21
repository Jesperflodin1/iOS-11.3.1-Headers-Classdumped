/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKDetailsCell.h>

@class UILabel, UIImageView;

@interface CKDetailsAddMemberCell : CKDetailsCell {

	UILabel* _addLabel;
	UIImageView* _addIcon;

}

@property (nonatomic,retain) UILabel * addLabel;                 //@synthesize addLabel=_addLabel - In the implementation block
@property (nonatomic,retain) UIImageView * addIcon;              //@synthesize addIcon=_addIcon - In the implementation block
+(id)reuseIdentifier;
+(Class)cellClass;
+(double)preferredHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIImageView *)addIcon;
-(UILabel *)addLabel;
-(void)setAddLabel:(UILabel *)arg1 ;
-(void)setAddIcon:(UIImageView *)arg1 ;
@end

