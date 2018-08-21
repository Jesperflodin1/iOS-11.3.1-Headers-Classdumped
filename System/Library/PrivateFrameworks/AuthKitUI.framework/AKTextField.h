/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UITextField, UIColor, UIVisualEffectView, UIImageView, NSMutableArray;

@interface AKTextField : UIView {

	BOOL _usesVibrancy;
	UILabel* _entryDescription;
	UITextField* _entryField;
	long long _textFieldStyle;
	long long _rowIdentifier;
	long long _blurEffectStyle;
	UIColor* _fieldBackgroundColor;
	UIVisualEffectView* _visualEffectView;
	UIImageView* _backgroundImageView;
	NSMutableArray* _constraints;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                       //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,readonly) UILabel * entryDescription;                       //@synthesize entryDescription=_entryDescription - In the implementation block
@property (nonatomic,readonly) UITextField * entryField;                         //@synthesize entryField=_entryField - In the implementation block
@property (assign,nonatomic) long long textFieldStyle;                           //@synthesize textFieldStyle=_textFieldStyle - In the implementation block
@property (assign,nonatomic) long long rowIdentifier;                            //@synthesize rowIdentifier=_rowIdentifier - In the implementation block
@property (assign,nonatomic) BOOL usesVibrancy;                                  //@synthesize usesVibrancy=_usesVibrancy - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                          //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIColor * fieldBackgroundColor;                     //@synthesize fieldBackgroundColor=_fieldBackgroundColor - In the implementation block
+(id)_backgroundImageForRowIdentifier:(long long)arg1 blurEffectStyle:(long long)arg2 backgroundColor:(id)arg3 ;
+(id)_cachedImageForRowIdentifier:(long long)arg1 blurEffectStyle:(long long)arg2 backgroundColor:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
+(void)drawFillForStyle:(long long)arg1 pathRect:(CGRect)arg2 roundedCorners:(int)arg3 cornerRadius:(double)arg4 backgroundColor:(id)arg5 ;
+(void)drawStrokeForStyle:(long long)arg1 pathRect:(CGRect)arg2 roundedCorners:(int)arg3 cornerRadius:(double)arg4 pathSegments:(int)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_commonInit;
-(NSMutableArray *)constraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(UIVisualEffectView *)visualEffectView;
-(UIImageView *)backgroundImageView;
-(void)_updateFonts:(id)arg1 ;
-(void)setRowIdentifier:(long long)arg1 ;
-(UILabel *)entryDescription;
-(UITextField *)entryField;
-(UIColor *)fieldBackgroundColor;
-(void)setUsesVibrancy:(BOOL)arg1 ;
-(void)setFieldBackgroundColor:(UIColor *)arg1 ;
-(BOOL)usesVibrancy;
-(long long)textFieldStyle;
-(void)_setupInlineEntryStyleViews;
-(void)_setupAlertStyleViews;
-(id)_fieldTextColor;
-(void)_setupLabelAndFieldStyles;
-(id)_setupBackgroundViewConstriants;
-(void)setTextFieldStyle:(long long)arg1 ;
-(long long)rowIdentifier;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

