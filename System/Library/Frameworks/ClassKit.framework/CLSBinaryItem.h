/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSActivityItem.h>

@interface CLSBinaryItem : CLSActivityItem {

	BOOL __value;
	long long _valueType;

}

@property (assign,nonatomic) long long valueType;              //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) BOOL _value;                      //@synthesize _value=__value - In the implementation block
@property (assign,nonatomic) BOOL value; 
+(BOOL)supportsSecureCoding;
-(long long)valueType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(void)setValue:(BOOL)arg1 ;
-(BOOL)value;
-(BOOL)_value;
-(id)dictionaryRepresentation;
-(void)setValueType:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(void)set_value:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 ;
@end

