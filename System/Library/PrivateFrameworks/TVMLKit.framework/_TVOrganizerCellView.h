/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface _TVOrganizerCellView : UIView {

	NSArray* _components;
	long long _contentVerticalAlignment;
	NSArray* _filteredComponents;

}

@property (nonatomic,copy,readonly) NSArray * filteredComponents;              //@synthesize filteredComponents=_filteredComponents - In the implementation block
@property (nonatomic,copy) NSArray * components;                               //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) long long contentVerticalAlignment;               //@synthesize contentVerticalAlignment=_contentVerticalAlignment - In the implementation block
-(void)setComponents:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(BOOL)canBecomeFocused;
-(long long)contentVerticalAlignment;
-(NSArray *)components;
-(void)setComponentsNeedUpdate;
-(void)_resetSubviews;
-(NSArray *)filteredComponents;
-(void)_verticallyStackComponents:(id)arg1 alignment:(long long)arg2 ;
-(CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(CGSize)arg2 ;
-(void)_updateView:(id)arg1 maxViewWidth:(double)arg2 ;
-(long long)_alignmentFromView:(id)arg1 ;
@end

