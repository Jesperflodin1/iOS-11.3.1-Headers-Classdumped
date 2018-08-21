/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CRKComposableView.h>

@class NSArray, NSMutableArray, NSString;

@interface CRKComposedView : UIView <CRKComposableView> {

	NSMutableArray* _cardSectionSubviews;

}

@property (nonatomic,retain) NSArray * cardSectionSubviews;                         //@synthesize cardSectionSubviews=_cardSectionSubviews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEdgeInsets cardSectionContentMargins; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)cardSectionSubviews;
-(void)setCardSectionSubviews:(NSArray *)arg1 ;
-(void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2 ;
-(UIEdgeInsets)cardSectionContentMargins;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1 ;
@end
