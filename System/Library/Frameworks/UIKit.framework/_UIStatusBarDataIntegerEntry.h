/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataIntegerEntry : _UIStatusBarDataEntry {

	BOOL _displayRawValue;
	long long _rawValue;
	long long _displayValue;

}

@property (assign,nonatomic) long long rawValue;                  //@synthesize rawValue=_rawValue - In the implementation block
@property (assign,nonatomic) long long displayValue;              //@synthesize displayValue=_displayValue - In the implementation block
@property (assign,nonatomic) BOOL displayRawValue;                //@synthesize displayRawValue=_displayRawValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)setRawValue:(long long)arg1 ;
-(void)setDisplayValue:(long long)arg1 ;
-(void)setDisplayRawValue:(BOOL)arg1 ;
-(long long)rawValue;
-(long long)displayValue;
-(BOOL)displayRawValue;
@end
