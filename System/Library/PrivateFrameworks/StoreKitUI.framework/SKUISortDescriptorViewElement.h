/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUISortDescriptorViewElement : SKUIViewElement {

	BOOL _ascending;
	NSString* _property;

}

@property (getter=isAscending,nonatomic,readonly) BOOL ascending;              //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;                       //@synthesize property=_property - In the implementation block
+(BOOL)shouldParseChildDOMElements;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(BOOL)isAscending;
-(NSString *)property;
@end
