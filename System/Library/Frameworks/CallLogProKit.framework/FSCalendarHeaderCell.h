/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallLogProKit.framework/CallLogProKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallLogProKit/CallLogProKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, FSCalendarHeaderView;

@interface FSCalendarHeaderCell : UICollectionViewCell {

	UILabel* _titleLabel;
	FSCalendarHeaderView* _header;

}

@property (assign,nonatomic,__weak) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) FSCalendarHeaderView * header;              //@synthesize header=_header - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setHeader:(FSCalendarHeaderView *)arg1 ;
-(FSCalendarHeaderView *)header;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

