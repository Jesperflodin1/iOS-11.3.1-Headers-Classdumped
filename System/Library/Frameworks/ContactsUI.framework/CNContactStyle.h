/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor, UIFont;

@interface CNContactStyle : NSObject <NSSecureCoding> {

	BOOL _usesOpaqueBackground;
	BOOL _usesTranslucentBarStyle;
	BOOL _shouldPresentInCurrentContext;
	BOOL _blurSupported;
	UIColor* _textColor;
	UIColor* _taglineTextColor;
	UIColor* _disabledTextColor;
	UIColor* _placeholderTextColor;
	UIColor* _highlightedTextColor;
	UIColor* _suggestedLabelTextColor;
	UIColor* _suggestedValueTextColor;
	UIColor* _readOnlyTextColor;
	UIColor* _notesTextColor;
	UIColor* _backgroundColor;
	UIColor* _sectionIndexBackgroundColor;
	long long _separatorBackdropOverlayBlendMode;
	UIColor* _searchBarBackgroundColor;
	UIColor* _transportBackgroundColor;
	UIColor* _transportBorderColor;
	UIColor* _transportBoldBackgroundColor;
	UIColor* _contactHeaderBackgroundColor;
	UIColor* _contactHeaderDropShadowColor;
	UIColor* _tintColorOverride;
	UIColor* _headerBackgroundColor;
	UIColor* _separatorColor;
	long long _separatorStyle;
	UIColor* _sectionBackgroundColor;
	UIColor* _selectedCellBackgroundColor;
	long long _barStyle;
	long long _keyboardAppearance;
	long long _modalTransitionStyle;
	long long _topActionsViewStyle;
	long long _inlineActionsViewStyle;

}

@property (nonatomic,readonly) UIFont * textFont; 
@property (nonatomic,readonly) UIFont * boldTextFont; 
@property (assign,nonatomic) long long topActionsViewStyle;                            //@synthesize topActionsViewStyle=_topActionsViewStyle - In the implementation block
@property (assign,nonatomic) long long inlineActionsViewStyle;                         //@synthesize inlineActionsViewStyle=_inlineActionsViewStyle - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * taglineTextColor;                               //@synthesize taglineTextColor=_taglineTextColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledTextColor;                              //@synthesize disabledTextColor=_disabledTextColor - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor;                           //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                           //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedLabelTextColor;                        //@synthesize suggestedLabelTextColor=_suggestedLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedValueTextColor;                        //@synthesize suggestedValueTextColor=_suggestedValueTextColor - In the implementation block
@property (nonatomic,retain) UIColor * readOnlyTextColor;                              //@synthesize readOnlyTextColor=_readOnlyTextColor - In the implementation block
@property (nonatomic,retain) UIColor * notesTextColor;                                 //@synthesize notesTextColor=_notesTextColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * sectionIndexBackgroundColor;                    //@synthesize sectionIndexBackgroundColor=_sectionIndexBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL usesOpaqueBackground;                                //@synthesize usesOpaqueBackground=_usesOpaqueBackground - In the implementation block
@property (assign,nonatomic) long long separatorBackdropOverlayBlendMode;              //@synthesize separatorBackdropOverlayBlendMode=_separatorBackdropOverlayBlendMode - In the implementation block
@property (nonatomic,retain) UIColor * searchBarBackgroundColor;                       //@synthesize searchBarBackgroundColor=_searchBarBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * transportBackgroundColor;                       //@synthesize transportBackgroundColor=_transportBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * transportBorderColor;                           //@synthesize transportBorderColor=_transportBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * transportBoldBackgroundColor;                   //@synthesize transportBoldBackgroundColor=_transportBoldBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * contactHeaderBackgroundColor;                   //@synthesize contactHeaderBackgroundColor=_contactHeaderBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * contactHeaderDropShadowColor;                   //@synthesize contactHeaderDropShadowColor=_contactHeaderDropShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColorOverride;                              //@synthesize tintColorOverride=_tintColorOverride - In the implementation block
@property (nonatomic,retain) UIColor * headerBackgroundColor;                          //@synthesize headerBackgroundColor=_headerBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                 //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                 //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * sectionBackgroundColor;                         //@synthesize sectionBackgroundColor=_sectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedCellBackgroundColor;                    //@synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor - In the implementation block
@property (assign,nonatomic) long long barStyle;                                       //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) BOOL usesTranslucentBarStyle;                             //@synthesize usesTranslucentBarStyle=_usesTranslucentBarStyle - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                             //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentInCurrentContext;                       //@synthesize shouldPresentInCurrentContext=_shouldPresentInCurrentContext - In the implementation block
@property (assign,nonatomic) BOOL blurSupported;                                       //@synthesize blurSupported=_blurSupported - In the implementation block
@property (assign,nonatomic) long long modalTransitionStyle;                           //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
+(id)currentStyle;
+(BOOL)supportsSecureCoding;
+(void)setCurrentStyle:(id)arg1 ;
+(id)watchStyle;
+(id)darkStyle;
+(id)starkStyle;
+(id)siriStyle;
+(id)testStyle;
+(id)faceTimeStyle;
+(id)defaultStyle;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(long long)keyboardAppearance;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(long long)separatorStyle;
-(UIColor *)sectionIndexBackgroundColor;
-(void)setSectionIndexBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(long long)modalTransitionStyle;
-(void)setModalTransitionStyle:(long long)arg1 ;
-(UIColor *)disabledTextColor;
-(UIColor *)highlightedTextColor;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIFont *)textFont;
-(UIColor *)tintColorOverride;
-(UIColor *)taglineTextColor;
-(UIColor *)contactHeaderBackgroundColor;
-(UIColor *)sectionBackgroundColor;
-(void)setSectionBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)selectedCellBackgroundColor;
-(void)setSelectedCellBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contactHeaderDropShadowColor;
-(UIColor *)suggestedLabelTextColor;
-(UIColor *)suggestedValueTextColor;
-(BOOL)shouldPresentInCurrentContext;
-(UIColor *)notesTextColor;
-(long long)topActionsViewStyle;
-(long long)inlineActionsViewStyle;
-(UIColor *)transportBoldBackgroundColor;
-(UIColor *)transportBackgroundColor;
-(UIColor *)transportBorderColor;
-(UIFont *)boldTextFont;
-(BOOL)blurSupported;
-(BOOL)usesOpaqueBackground;
-(long long)separatorBackdropOverlayBlendMode;
-(void)setBlurSupported:(BOOL)arg1 ;
-(void)setTaglineTextColor:(UIColor *)arg1 ;
-(void)setNotesTextColor:(UIColor *)arg1 ;
-(void)setSuggestedLabelTextColor:(UIColor *)arg1 ;
-(void)setSuggestedValueTextColor:(UIColor *)arg1 ;
-(void)setUsesOpaqueBackground:(BOOL)arg1 ;
-(void)setSearchBarBackgroundColor:(UIColor *)arg1 ;
-(void)setContactHeaderBackgroundColor:(UIColor *)arg1 ;
-(void)setTransportBackgroundColor:(UIColor *)arg1 ;
-(void)setTransportBorderColor:(UIColor *)arg1 ;
-(void)setTransportBoldBackgroundColor:(UIColor *)arg1 ;
-(void)setContactHeaderDropShadowColor:(UIColor *)arg1 ;
-(void)setTintColorOverride:(UIColor *)arg1 ;
-(void)setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(void)setHeaderBackgroundColor:(UIColor *)arg1 ;
-(void)setUsesTranslucentBarStyle:(BOOL)arg1 ;
-(void)setShouldPresentInCurrentContext:(BOOL)arg1 ;
-(void)setTopActionsViewStyle:(long long)arg1 ;
-(void)setInlineActionsViewStyle:(long long)arg1 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(void)setReadOnlyTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(UIColor *)readOnlyTextColor;
-(UIColor *)searchBarBackgroundColor;
-(UIColor *)headerBackgroundColor;
-(BOOL)usesTranslucentBarStyle;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
@end

