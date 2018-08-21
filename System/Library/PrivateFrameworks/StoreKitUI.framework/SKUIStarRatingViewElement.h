/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUIStarRatingViewElement : SKUIViewElement {

	float _ratingValue;
	SKUIViewElementText* _text;
	long long _starType;
	BOOL _enabled;

}

@property (nonatomic,readonly) long long starType;                      //@synthesize starType=_starType - In the implementation block
@property (nonatomic,readonly) float ratingValue;                       //@synthesize ratingValue=_ratingValue - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * text;              //@synthesize text=_text - In the implementation block
-(SKUIViewElementText *)text;
-(BOOL)isEnabled;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(float)ratingValue;
-(long long)starType;
@end

