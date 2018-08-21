/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class PKPassField, PKPassFieldTemplate, PKPassColorProfile, PKDiffView, UILabel;

@interface PKPassFieldView : UIView {

	BOOL _needsRecalculation;
	CGSize _cachedSize;
	long long _background;
	PKPassField* _field;
	PKPassFieldTemplate* _fieldTemplate;
	PKPassColorProfile* _colorProfile;
	PKDiffView* _diffView;
	UILabel* _labelLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) PKDiffView * diffView;                            //@synthesize diffView=_diffView - In the implementation block
@property (nonatomic,retain) PKPassField * field;                              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) PKPassFieldTemplate * fieldTemplate;              //@synthesize fieldTemplate=_fieldTemplate - In the implementation block
@property (nonatomic,retain) PKPassColorProfile * colorProfile;                //@synthesize colorProfile=_colorProfile - In the implementation block
@property (nonatomic,readonly) UILabel * labelLabel;                           //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                           //@synthesize valueLabel=_valueLabel - In the implementation block
+(id)newViewForField:(id)arg1 fieldTemplate:(id)arg2 ;
-(void)setField:(PKPassField *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPassField *)field;
-(UILabel *)valueLabel;
-(UILabel *)labelLabel;
-(PKPassColorProfile *)colorProfile;
-(void)presentDiff:(id)arg1 inView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setColorProfile:(PKPassColorProfile *)arg1 ;
-(PKPassFieldTemplate *)fieldTemplate;
-(void)setFieldTemplate:(PKPassFieldTemplate *)arg1 ;
-(void)invalidateCachedFieldSize;
-(id)initWithField:(id)arg1 fieldTemplate:(id)arg2 ;
-(void)setColorProfile:(id)arg1 background:(long long)arg2 ;
-(BOOL)_shouldDisplayLabel;
-(id)_labelAttributedStringForColorProfile:(id)arg1 background:(long long)arg2 ;
-(id)_valueAttributedStringForColorProfile:(id)arg1 background:(long long)arg2 ;
-(CGSize)_resizeMultiLineValueFontForAvailableSize:(CGSize)arg1 ;
-(void)setDiffView:(PKDiffView *)arg1 ;
-(PKDiffView *)diffView;
@end

