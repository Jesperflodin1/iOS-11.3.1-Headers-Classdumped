/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyle.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl.h>

@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_CarPlay : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(CGSize)minimumActionContentSize;
-(id)defaultScreen;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(double)contentCornerRadius;
-(UIEdgeInsets)contentMargin;
-(double)horizontalImageContentSpacing;
-(double)verticalImageContentSpacing;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(BOOL)selectByPressGestureRequired;
-(id)_preferredActionFont;
-(id)_regularActionFont;
-(id)_normalActionTitleLabelColorForViewState:(id)arg1 ;
-(id)_highlightedActionTitleLabelColorForViewState:(id)arg1 ;
@end
