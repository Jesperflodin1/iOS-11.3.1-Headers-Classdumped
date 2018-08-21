/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, NSMutableArray, NSAttributedString, NSArray, UIColor;

@interface IKTextElement : IKViewElement {

	IKTextParser* _textParser;
	NSMutableArray* _textBadges;
	unsigned long long _textStyle;

}

@property (nonatomic,retain,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) NSArray * badges; 
@property (nonatomic,readonly) unsigned long long textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) long long maxLines; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) UIColor * color; 
+(BOOL)shouldParseChildDOMElements;
-(id)accessibilityText;
-(NSAttributedString *)text;
-(UIColor *)color;
-(unsigned long long)alignment;
-(unsigned long long)textStyle;
-(void)appDocumentDidMarkStylesDirty;
-(unsigned long long)_styleForTagName:(id)arg1 ;
-(long long)maxLines;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSArray *)badges;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 defaultAttributes:(id*)arg2 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 defaultAttributes:(id*)arg4 ;
-(id)attributedStringWithFont:(id)arg1 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
@end

