/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@class UIFont;

@interface HUGridSceneCellLayoutOptions : HUGridCellLayoutOptions {

	double _iconInnerHorizontalMargin;
	double _titleInterLineSpacing;
	double _titleDescriptionLineSpacing;
	UIFont* _descriptionFont;
	double _cellHeight;
	unsigned long long _numberOfTitleLines;

}

@property (assign,nonatomic) double iconInnerHorizontalMargin;                   //@synthesize iconInnerHorizontalMargin=_iconInnerHorizontalMargin - In the implementation block
@property (assign,nonatomic) double titleInterLineSpacing;                       //@synthesize titleInterLineSpacing=_titleInterLineSpacing - In the implementation block
@property (assign,nonatomic) double titleDescriptionLineSpacing;                 //@synthesize titleDescriptionLineSpacing=_titleDescriptionLineSpacing - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont;                           //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (assign,nonatomic) double cellHeight;                                  //@synthesize cellHeight=_cellHeight - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTitleLines;              //@synthesize numberOfTitleLines=_numberOfTitleLines - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cellHeight;
-(void)setCellHeight:(double)arg1 ;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)setTitleInterLineSpacing:(double)arg1 ;
-(void)setTitleDescriptionLineSpacing:(double)arg1 ;
-(double)titleInterLineSpacing;
-(UIFont *)descriptionFont;
-(unsigned long long)numberOfTitleLines;
-(double)titleDescriptionLineSpacing;
-(double)iconInnerHorizontalMargin;
-(void)setIconInnerHorizontalMargin:(double)arg1 ;
@end

