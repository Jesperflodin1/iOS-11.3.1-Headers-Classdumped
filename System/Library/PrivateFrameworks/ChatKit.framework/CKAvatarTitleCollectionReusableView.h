/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class CKLabel, NSMutableArray;

@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView {

	long long _style;
	long long _avatarTitleAccessoryImageType;
	CKLabel* _titleLabel;
	NSMutableArray* _pendingTitles;

}

@property (nonatomic,retain) CKLabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTitles;                       //@synthesize pendingTitles=_pendingTitles - In the implementation block
@property (assign,nonatomic) long long style;                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long avatarTitleAccessoryImageType;              //@synthesize avatarTitleAccessoryImageType=_avatarTitleAccessoryImageType - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CKLabel *)titleLabel;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setTitleLabel:(CKLabel *)arg1 ;
-(void)setAvatarTitleAccessoryImageType:(long long)arg1 ;
-(NSMutableArray *)pendingTitles;
-(void)setPendingTitles:(NSMutableArray *)arg1 ;
-(void)_animateFromQueue;
-(void)setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureWithTitle:(id)arg1 ;
-(long long)avatarTitleAccessoryImageType;
@end

