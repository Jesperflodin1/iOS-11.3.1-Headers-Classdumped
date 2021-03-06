/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIAccessibilityAutomationAction : NSObject {

	NSString* _identifier;
	SEL _selector;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SEL selector;                       //@synthesize selector=_selector - In the implementation block
-(NSString *)identifier;
-(SEL)selector;
-(id)initWithIdentifier:(id)arg1 selector:(SEL)arg2 ;
@end

