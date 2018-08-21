/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewSubviewReusing.h>

@protocol UITable, UITableConstants;
@class NSString, UIImage, UIView, _UITableViewHeaderFooterViewLabel, UITableView, UILabel;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {

	long long _tableViewStyle;
	UIImage* _backgroundImage;
	CGRect _frame;
	long long _textAlignment;
	id<UITable> _tableView;
	double _maxTitleWidth;
	NSString* _reuseIdentifier;
	UIView* _backgroundView;
	_UITableViewHeaderFooterViewLabel* _label;
	_UITableViewHeaderFooterViewLabel* _detailLabel;
	UIView* _contentView;
	double _leadingMarginWidth;
	double _trailingMarginWidth;
	id<UITableConstants> _constants;
	struct {
		unsigned isHeader : 1;
		unsigned labelBackgroundColorNeedsUpdate : 1;
		unsigned detailLabelBackgroundColorNeedsUpdate : 1;
		unsigned floating : 1;
		unsigned stripPadding : 1;
		unsigned isTopHeader : 1;
		unsigned didSetSectionHeader : 1;
		unsigned didSetupDefaults : 1;
		unsigned insetsContentViewsToSafeArea : 1;
	}  _headerFooterFlags;
	id<UITable> _table;

}

@property (getter=_effectiveSafeAreaInsets,nonatomic,readonly) UIEdgeInsets effectiveSafeAreaInsets; 
@property (assign,nonatomic,__weak) id<UITable> table;                                                                                                     //@synthesize table=_table - In the implementation block
@property (nonatomic,copy) NSString * reuseIdentifier;                                                                                                     //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,setter=_setMarginWidth:,getter=_marginWidth,nonatomic) double marginWidth; 
@property (assign,setter=_setRightMarginWidth:,getter=_rightMarginWidth,nonatomic) double rightMarginWidth; 
@property (assign,setter=_setInsetsContentViewsToSafeArea:,getter=_insetsContentViewsToSafeArea,nonatomic) BOOL insetsContentViewsToSafeArea; 
@property (assign,setter=_setStripPadding:,getter=_stripPadding,nonatomic) BOOL stripPadding; 
@property (assign,setter=_setTopHeader:,getter=_isTopHeader,nonatomic) BOOL topHeader; 
@property (setter=_setConstants:,getter=_constants,nonatomic,retain) id<UITableConstants> constants; 
@property (assign,nonatomic) BOOL floating; 
@property (assign,nonatomic) long long tableViewStyle; 
@property (nonatomic,retain) UIImage * backgroundImage;                                                                                                    //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) BOOL sectionHeader; 
@property (assign,nonatomic,__weak) UITableView * tableView; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double maxTitleWidth;                                                                                                         //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView;                                                                                                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeaderHeightForStyle:(long long)arg1 ;
+(double)defaultFooterHeightForStyle:(long long)arg1 ;
+(id)_defaultPlainHeaderFooterFont;
+(id)_defaultFontForHeaderFooterView:(id)arg1 ;
+(id)_defaultTextColorForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2 ;
+(id)_defaultFontForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2 ;
-(void)_cnui_applyContactStyle;
-(CGRect)frame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)layoutMarginsDidChange;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isTransparentFocusRegion;
-(UIImage *)backgroundImage;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setMaxTitleWidth:(double)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(void)setTableViewStyle:(long long)arg1 ;
-(void)_setConstants:(id)arg1 ;
-(id)_constants;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setSectionHeader:(BOOL)arg1 ;
-(void)_setMarginWidth:(double)arg1 ;
-(void)_setRightMarginWidth:(double)arg1 ;
-(void)_setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(void)_setupLabelAppearance;
-(void)_setBackgroundViewColor:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(void)prepareForReuse;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)_setTopHeader:(BOOL)arg1 ;
-(void)_setStripPadding:(BOOL)arg1 ;
-(UIEdgeInsets)_effectiveSafeAreaInsets;
-(double)_marginWidth;
-(UITableView *)tableView;
-(long long)textAlignment;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(BOOL)floating;
-(id<UITable>)table;
-(long long)tableViewStyle;
-(void)setNeedsUpdateConstraints;
-(BOOL)_insetsContentViewsToSafeArea;
-(void)setTable:(id<UITable>)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3 ;
-(double)_rightMarginWidth;
-(void)_setupBackgroundView;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)_updateBackgroundImage;
-(CGRect)_labelFrame;
-(double)maxTitleWidth;
-(CGRect)_contentRect;
-(void)_invalidateLabelBackgroundColor;
-(void)_invalidateDetailLabelBackgroundColor;
-(BOOL)sectionHeader;
-(void)_setupDefaultsIfNecessary;
-(BOOL)_useDetailText;
-(void)_updateLabelBackgroundColor;
-(void)_updateDetailLabelBackgroundColor;
-(id)_label:(BOOL)arg1 ;
-(UIEdgeInsets)_insetsToContentRect;
-(CGSize)_textSizeForWidth:(double)arg1 ;
-(CGSize)_detailTextSizeForWidth:(double)arg1 ;
-(UIEdgeInsets)_insetsToBounds;
-(CGRect)_backgroundRect;
-(CGRect)_backgroundRectForWidth:(double)arg1 ;
-(CGRect)_contentRectForWidth:(double)arg1 ;
-(void)_updateLayerContents;
-(void)_updateContentAndBackgroundView;
-(void)_updateLabelBackgroundColorIfNeeeded;
-(CGRect)_detailLabelFrame;
-(void)_updateDetailLabelBackgroundColorIfNeeded;
-(BOOL)_stripPadding;
-(BOOL)_isTopHeader;
@end

