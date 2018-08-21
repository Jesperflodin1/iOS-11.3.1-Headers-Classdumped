/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface CLKSimpleTextProvider : CLKTextProvider {

	BOOL _useNoContentDashFormatting;
	NSString* _text;
	NSString* _shortText;
	NSString* _accessibilityLabel;

}

@property (assign,nonatomic) BOOL useNoContentDashFormatting;              //@synthesize useNoContentDashFormatting=_useNoContentDashFormatting - In the implementation block
@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * shortText;                           //@synthesize shortText=_shortText - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                  //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3 ;
+(id)finalizedTextProviderWithText:(id)arg1 monospaceNumbers:(BOOL)arg2 ;
+(id)textProviderWithText:(id)arg1 ;
+(id)finalizedTextProviderWithText:(id)arg1 ;
+(id)textProviderWithText:(id)arg1 shortText:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)attributedString;
-(void)_validate;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(void)setShortText:(NSString *)arg1 ;
-(NSString *)shortText;
-(BOOL)useNoContentDashFormatting;
-(void)setUseNoContentDashFormatting:(BOOL)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
@end

