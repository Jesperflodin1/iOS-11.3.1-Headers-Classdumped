/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIImageViewElement;

@interface SKUIBrowseItemComponent : SKUIPageComponent {

	NSString* _title;
	NSString* _subtitle;
	long long _index;
	SKUIImageViewElement* _decorationImage;
	BOOL _showTopBorder;

}

@property (nonatomic,readonly) SKUIImageViewElement * decorationImage;              //@synthesize decorationImage=_decorationImage - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long index;                                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                                    //@synthesize showTopBorder=_showTopBorder - In the implementation block
-(long long)componentType;
-(NSString *)title;
-(void)setIndex:(long long)arg1 ;
-(long long)index;
-(NSString *)subtitle;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(SKUIImageViewElement *)decorationImage;
-(BOOL)showTopBorder;
-(id)initWithViewElement:(id)arg1 ;
@end

