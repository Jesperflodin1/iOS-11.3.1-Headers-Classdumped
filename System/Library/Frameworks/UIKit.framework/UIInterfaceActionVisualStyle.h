/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImplInternal.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIInterfaceActionConcreteVisualStyleImpl;
@class UIInterfaceActionGroupViewState, UIInterfaceActionConcreteVisualStyle, UIInterfaceActionOverrideVisualStyle, NSString;

@interface UIInterfaceActionVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, UIInterfaceActionConcreteVisualStyleImpl, NSCopying> {

	UIInterfaceActionGroupViewState* _groupViewState;
	UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl> _concreteVisualStyle;
	/*^block*/id _fontForViewStateBlock;
	UIInterfaceActionOverrideVisualStyle* _visualStyleOverride;

}

@property (nonatomic,retain) UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl> concreteVisualStyle;              //@synthesize concreteVisualStyle=_concreteVisualStyle - In the implementation block
@property (nonatomic,copy) id fontForViewStateBlock;                                                                                           //@synthesize fontForViewStateBlock=_fontForViewStateBlock - In the implementation block
@property (nonatomic,retain) UIInterfaceActionOverrideVisualStyle * visualStyleOverride;                                                       //@synthesize visualStyleOverride=_visualStyleOverride - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionGroupViewState * groupViewState;                                                               //@synthesize groupViewState=_groupViewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)idiomSpecificStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actionPropertiesAffectingImageViewStyling;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(UIInterfaceActionOverrideVisualStyle *)visualStyleOverride;
-(UIInterfaceActionGroupViewState *)groupViewState;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(CGSize)minimumActionContentSize;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)defaultScreen;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(double)contentCornerRadius;
-(UIEdgeInsets)contentMargin;
-(double)horizontalImageContentSpacing;
-(double)verticalImageContentSpacing;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(double)actionSectionSpacing;
-(CGSize)maximumActionGroupContentSize;
-(BOOL)selectByPressGestureRequired;
-(BOOL)selectionFeedbackEnabled;
-(id)actionClassificationLabelFontForViewState:(id)arg1 ;
-(id)actionClassificationLabelColorForViewState:(id)arg1 ;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingLabelStyling;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(double)actionTitleLabelMinimumScaleFactor;
-(id)initWithConcreteVisualStyle:(id)arg1 ;
-(UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl>)concreteVisualStyle;
-(void)setConcreteVisualStyle:(UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl>)arg1 ;
-(id)_styleForVisualProperties;
-(id)fontForViewStateBlock;
-(id)_base_actionPropertiesAffectingLabelStyling;
-(void)_base_configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)_base_actionPropertiesAffectingImageViewStyling;
-(void)_base_configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(id)copyWithGroupViewState:(id)arg1 ;
-(void)setVisualStyleOverride:(UIInterfaceActionOverrideVisualStyle *)arg1 ;
-(void)setFontForViewStateBlock:(id)arg1 ;
-(id)defaultConcreteActionTitleLabelRegularFont;
-(id)defaultConcreteActionTitleLabelPreferredFont;
@end

