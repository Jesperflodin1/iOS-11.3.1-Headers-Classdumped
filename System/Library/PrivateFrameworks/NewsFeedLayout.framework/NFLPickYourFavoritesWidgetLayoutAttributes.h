/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLFeedCollectionViewLayoutAttributes.h>

@class UIFont, NSParagraphStyle;

@interface NFLPickYourFavoritesWidgetLayoutAttributes : NFLFeedCollectionViewLayoutAttributes {

	UIFont* _titleFont;
	UIFont* _bodyFont;
	NSParagraphStyle* _bodyParagraphStyle;
	UIFont* _buttonFont;
	CGRect _titleFrame;
	CGRect _bodyFrame;
	CGRect _buttonFrame;

}

@property (assign,nonatomic) CGRect titleFrame;                                  //@synthesize titleFrame=_titleFrame - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                 //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) CGRect bodyFrame;                                   //@synthesize bodyFrame=_bodyFrame - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                                  //@synthesize bodyFont=_bodyFont - In the implementation block
@property (nonatomic,retain) NSParagraphStyle * bodyParagraphStyle;              //@synthesize bodyParagraphStyle=_bodyParagraphStyle - In the implementation block
@property (assign,nonatomic) CGRect buttonFrame;                                 //@synthesize buttonFrame=_buttonFrame - In the implementation block
@property (nonatomic,retain) UIFont * buttonFont;                                //@synthesize buttonFont=_buttonFont - In the implementation block
-(CGRect)titleFrame;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIFont *)bodyFont;
-(void)setButtonFont:(UIFont *)arg1 ;
-(UIFont *)buttonFont;
-(CGRect)buttonFrame;
-(void)setButtonFrame:(CGRect)arg1 ;
-(void)setTitleFrame:(CGRect)arg1 ;
-(CGRect)bodyFrame;
-(void)setBodyFrame:(CGRect)arg1 ;
-(NSParagraphStyle *)bodyParagraphStyle;
-(void)setBodyParagraphStyle:(NSParagraphStyle *)arg1 ;
-(void)setBodyFont:(UIFont *)arg1 ;
@end
