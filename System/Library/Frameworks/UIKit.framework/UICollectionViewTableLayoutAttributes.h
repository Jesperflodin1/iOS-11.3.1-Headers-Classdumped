/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <UIKit/UICollectionViewTableSectionHeaderFooterAttributes.h>
#import <UIKit/UICollectionViewTableAllRowAttributes.h>

@class UIColor, UIVisualEffect;

@interface UICollectionViewTableLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewTableSectionHeaderFooterAttributes, UICollectionViewTableAllRowAttributes> {

	BOOL _separatorInsetIsRelativeToCellEdges;
	BOOL _shouldIndentWhileEditing;
	BOOL _showsReorderControl;
	BOOL _layoutMarginsFollowReadableWidth;
	BOOL _insetsContentViewsToSafeArea;
	BOOL _drawsSeparatorAtTopOfSection;
	BOOL _drawsSeparatorAtBottomOfSection;
	BOOL _isHeader;
	BOOL _floating;
	int _sectionLocation;
	long long _separatorStyle;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UIColor* _backgroundColor;
	long long _accessoryType;
	long long _editingStyle;
	double _defaultLeadingCellMarginWidth;
	double _defaultTrailingCellMarginWidth;
	double _indexBarExtentFromEdge;
	double _sectionBorderWidth;
	long long _indentationLevel;
	double _maxTitleWidth;
	long long _textAlignment;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) BOOL isHeader;                                         //@synthesize isHeader=_isHeader - In the implementation block
@property (assign,nonatomic) double maxTitleWidth;                                  //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                  //@synthesize margins=_margins - In the implementation block
@property (assign,nonatomic) long long textAlignment;                               //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL floating;                                         //@synthesize floating=_floating - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;                           //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges;              //@synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor;                                //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                      //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) int sectionLocation;                                   //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (assign,nonatomic) BOOL layoutMarginsFollowReadableWidth;                 //@synthesize layoutMarginsFollowReadableWidth=_layoutMarginsFollowReadableWidth - In the implementation block
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea;                     //@synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea - In the implementation block
@property (assign,nonatomic) double defaultLeadingCellMarginWidth;                  //@synthesize defaultLeadingCellMarginWidth=_defaultLeadingCellMarginWidth - In the implementation block
@property (assign,nonatomic) double defaultTrailingCellMarginWidth;                 //@synthesize defaultTrailingCellMarginWidth=_defaultTrailingCellMarginWidth - In the implementation block
@property (assign,nonatomic) double indexBarExtentFromEdge;                         //@synthesize indexBarExtentFromEdge=_indexBarExtentFromEdge - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInset;                          //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (assign,nonatomic) double sectionBorderWidth;                             //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                            //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (assign,nonatomic) BOOL drawsSeparatorAtTopOfSection;                     //@synthesize drawsSeparatorAtTopOfSection=_drawsSeparatorAtTopOfSection - In the implementation block
@property (assign,nonatomic) BOOL drawsSeparatorAtBottomOfSection;                  //@synthesize drawsSeparatorAtBottomOfSection=_drawsSeparatorAtBottomOfSection - In the implementation block
@property (assign,nonatomic) long long accessoryType;                               //@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,nonatomic) long long editingStyle;                                //@synthesize editingStyle=_editingStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldIndentWhileEditing;                         //@synthesize shouldIndentWhileEditing=_shouldIndentWhileEditing - In the implementation block
@property (assign,nonatomic) BOOL showsReorderControl;                              //@synthesize showsReorderControl=_showsReorderControl - In the implementation block
+(long long)automaticValueOptionsForRepresentedElementCategory:(unsigned long long)arg1 ;
+(void)applyValuesFromAttributes:(id)arg1 toAttributes:(id)arg2 valueOptions:(long long)arg3 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(BOOL)layoutMarginsFollowReadableWidth;
-(UIColor *)separatorColor;
-(void)setMaxTitleWidth:(double)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(long long)accessoryType;
-(BOOL)insetsContentViewsToSafeArea;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(long long)editingStyle;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(BOOL)shouldIndentWhileEditing;
-(BOOL)showsReorderControl;
-(long long)separatorStyle;
-(UIEdgeInsets)separatorInset;
-(UIVisualEffect *)separatorEffect;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(long long)textAlignment;
-(BOOL)floating;
-(double)sectionBorderWidth;
-(void)setSectionBorderWidth:(double)arg1 ;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(double)defaultLeadingCellMarginWidth;
-(void)setDefaultLeadingCellMarginWidth:(double)arg1 ;
-(double)defaultTrailingCellMarginWidth;
-(void)setDefaultTrailingCellMarginWidth:(double)arg1 ;
-(double)indexBarExtentFromEdge;
-(void)setIndexBarExtentFromEdge:(double)arg1 ;
-(UIEdgeInsets)backgroundInset;
-(void)setBackgroundInset:(UIEdgeInsets)arg1 ;
-(long long)indentationLevel;
-(BOOL)drawsSeparatorAtTopOfSection;
-(void)setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(BOOL)drawsSeparatorAtBottomOfSection;
-(void)setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(void)setEditingStyle:(long long)arg1 ;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(BOOL)isHeader;
-(void)setIsHeader:(BOOL)arg1 ;
-(double)maxTitleWidth;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
@end

