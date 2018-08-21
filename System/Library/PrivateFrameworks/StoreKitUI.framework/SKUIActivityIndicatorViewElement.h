/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIActivityIndicatorViewElement : SKUIViewElement {

	double _period;

}

@property (nonatomic,readonly) SKUIImageViewElement * image; 
@property (nonatomic,readonly) double period; 
@property (nonatomic,readonly) SKUILabelViewElement * text; 
-(SKUILabelViewElement *)text;
-(SKUIImageViewElement *)image;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(long long)pageComponentType;
-(double)period;
-(BOOL)isDisabled;
@end
