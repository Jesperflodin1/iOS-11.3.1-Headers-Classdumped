/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface SKUIComposeTextFieldConfiguration : NSObject {

	UIEdgeInsets _borderInsets;
	long long _columnIndex;
	BOOL _isRequired;
	NSString* _label;
	unsigned long long _maxLength;
	NSString* _placeholder;
	NSString* _value;

}

@property (assign,nonatomic) UIEdgeInsets borderInsets;                    //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) long long columnIndex;                        //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,copy) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                         //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;              //@synthesize isRequired=_isRequired - In the implementation block
@property (nonatomic,copy) NSString * value;                               //@synthesize value=_value - In the implementation block
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isRequired;
-(void)setRequired:(BOOL)arg1 ;
-(void)setColumnIndex:(long long)arg1 ;
-(long long)columnIndex;
@end

