/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIPhysicalCirclesTemplateDOMFeature, SKUILabelViewElement, NSArray, SKUIPaletteViewElement;

@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement {

	SKUIPhysicalCirclesTemplateDOMFeature* _scriptInterface;

}

@property (nonatomic,readonly) SKUILabelViewElement * subtitleElement; 
@property (nonatomic,readonly) SKUILabelViewElement * titleElement; 
@property (nonatomic,readonly) NSArray * circleItemElements; 
@property (nonatomic,readonly) SKUIPaletteViewElement * footerPaletteElement; 
@property (nonatomic,readonly) SKUIPhysicalCirclesTemplateDOMFeature * scriptInterface;              //@synthesize scriptInterface=_scriptInterface - In the implementation block
+(id)supportedFeatures;
-(SKUIPhysicalCirclesTemplateDOMFeature *)scriptInterface;
-(NSArray *)circleItemElements;
-(void)dispatchRemovedEventWithChildViewElement:(id)arg1 ;
-(SKUILabelViewElement *)titleElement;
-(SKUIPaletteViewElement *)footerPaletteElement;
-(SKUILabelViewElement *)subtitleElement;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end

