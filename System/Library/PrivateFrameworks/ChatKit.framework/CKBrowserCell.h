/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol CKBrowserCellDelegate;
@class CKBadgeView, CKBrowserSelectionLabelAccessoryView, UILabel, UIView;

@interface CKBrowserCell : UICollectionViewCell {

	BOOL _jitter;
	BOOL _shouldShowLabel;
	id<CKBrowserCellDelegate> _delegate;
	CKBadgeView* _badgeView;
	unsigned long long _shinyStatus;
	CKBrowserSelectionLabelAccessoryView* _shinyStatusView;
	UILabel* _browserLabel;

}

@property (readonly) UIView * iconView; 
@property (assign,nonatomic) unsigned long long shinyStatus;                                      //@synthesize shinyStatus=_shinyStatus - In the implementation block
@property (nonatomic,retain) CKBrowserSelectionLabelAccessoryView * shinyStatusView;              //@synthesize shinyStatusView=_shinyStatusView - In the implementation block
@property (nonatomic,retain) UILabel * browserLabel;                                              //@synthesize browserLabel=_browserLabel - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserCellDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKBadgeView * badgeView;                                             //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) BOOL jitter;                                                         //@synthesize jitter=_jitter - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLabel;                                                //@synthesize shouldShowLabel=_shouldShowLabel - In the implementation block
+(id)reuseIdentifier;
+(Class)classForItemType:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CKBrowserCellDelegate>)delegate;
-(void)setDelegate:(id<CKBrowserCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(CKBadgeView *)badgeView;
-(void)setBadgeView:(CKBadgeView *)arg1 ;
-(void)setShouldShowLabel:(BOOL)arg1 ;
-(UIView *)iconView;
-(void)setBrowserLabel:(UILabel *)arg1 ;
-(UILabel *)browserLabel;
-(CKBrowserSelectionLabelAccessoryView *)shinyStatusView;
-(BOOL)jitter;
-(void)setJitter:(BOOL)arg1 ;
-(BOOL)shouldShowLabel;
-(unsigned long long)shinyStatus;
-(void)setShinyStatus:(unsigned long long)arg1 ;
-(void)setShinyStatusView:(CKBrowserSelectionLabelAccessoryView *)arg1 ;
@end

